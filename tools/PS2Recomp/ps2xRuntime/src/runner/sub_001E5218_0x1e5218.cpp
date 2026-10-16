#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5218
// Address: 0x1e5218 - 0x1e55b8
void sub_001E5218_0x1e5218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5218_0x1e5218");
#endif

    switch (ctx->pc) {
        case 0x1e5320u: goto label_1e5320;
        case 0x1e5350u: goto label_1e5350;
        case 0x1e535cu: goto label_1e535c;
        case 0x1e5394u: goto label_1e5394;
        case 0x1e5478u: goto label_1e5478;
        case 0x1e5480u: goto label_1e5480;
        case 0x1e549cu: goto label_1e549c;
        case 0x1e54e4u: goto label_1e54e4;
        case 0x1e54f0u: goto label_1e54f0;
        case 0x1e5518u: goto label_1e5518;
        case 0x1e555cu: goto label_1e555c;
        case 0x1e5570u: goto label_1e5570;
        default: break;
    }

    ctx->pc = 0x1e5218u;

    // 0x1e5218: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e5218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e521c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e521cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e5220: 0xc440e75c  lwc1        $f0, -0x18A4($v0)
    ctx->pc = 0x1e5220u;
    { uint32_t bits = FAST_READ32(0x33E75Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5224: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e5224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e5228: 0xc461e760  lwc1        $f1, -0x18A0($v1)
    ctx->pc = 0x1e5228u;
    { uint32_t bits = FAST_READ32(0x33E760u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e522c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e5230: 0xc442e758  lwc1        $f2, -0x18A8($v0)
    ctx->pc = 0x1e5230u;
    { uint32_t bits = FAST_READ32(0x33E758u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e5234: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e5234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e5238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e5238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e523c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e523cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e5240: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1e5240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1e5244: 0x34210fd0  ori         $at, $at, 0xFD0
    ctx->pc = 0x1e5244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4048);
    // 0x1e5248: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e5248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e524c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1e524cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5250: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e5250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e5254: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e5254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1e5258: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e5258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e525c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e5260: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e5260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5264: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e5264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e5268: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1e5268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e526c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e5270: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e5270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5274: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e5274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e5278: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1e5278u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e527c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e5280: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e5280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1e5284: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e5284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e5288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e528c: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x1e528cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e5290: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x1e5290u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e5294: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x1e5294u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e5298: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1e5298u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e529c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E529Cu;
    {
        const bool branch_taken_0x1e529c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E529Cu;
        // 0x1e52a0: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e529c) {
            ctx->pc = 0x1E52A8u;
            goto label_1e52a8;
        }
    }
    ctx->pc = 0x1E52A4u;
    // 0x1e52a4: 0xe683e758  swc1        $f3, -0x18A8($s4)
    ctx->pc = 0x1e52a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294960984), bits); }
label_1e52a8:
    // 0x1e52a8: 0xc680e758  lwc1        $f0, -0x18A8($s4)
    ctx->pc = 0x1e52a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294960984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e52ac: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1e52acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x1e52b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e52b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e52b4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1e52b4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x1e52b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e52b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e52bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e52bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e52c0: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x1e52c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1e52c4: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E52C4u;
    {
        const bool branch_taken_0x1e52c4 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1E52C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52C4u;
        // 0x1e52c8: 0x2a420100  slti        $v0, $s2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52c4) {
            ctx->pc = 0x1E52D8u;
            goto label_1e52d8;
        }
    }
    ctx->pc = 0x1E52CCu;
    // 0x1e52cc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1e52ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e52d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E52D0u;
    {
        const bool branch_taken_0x1e52d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52D0u;
        // 0x1e52d4: 0x242280b  movn        $a1, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52d0) {
            ctx->pc = 0x1E52DCu;
            goto label_1e52dc;
        }
    }
    ctx->pc = 0x1E52D8u;
label_1e52d8:
    // 0x1e52d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e52d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e52dc:
    // 0x1e52dc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1e52dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e52e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e52e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e52e4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1e52e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e52e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e52ec: 0x44282a  slt         $a1, $v0, $a0
    ctx->pc = 0x1e52ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e52f0: 0x24900007  addiu       $s0, $a0, 0x7
    ctx->pc = 0x1e52f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1e52f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1e52f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e52f8: 0x24710007  addiu       $s1, $v1, 0x7
    ctx->pc = 0x1e52f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1e52fc: 0x85800b  movn        $s0, $a0, $a1
    ctx->pc = 0x1e52fcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4));
    // 0x1e5300: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e5300u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
    // 0x1e5304: 0x1080c3  sra         $s0, $s0, 3
    ctx->pc = 0x1e5304u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 3));
    // 0x1e5308: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x1e5308u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
    // 0x1e530c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e530cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5310: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x1e5310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x1e5314: 0x34a50068  ori         $a1, $a1, 0x68
    ctx->pc = 0x1e5314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)104);
    // 0x1e5318: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5318u;
    SET_GPR_U32(ctx, 31, 0x1E5320u);
    ctx->pc = 0x1E531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5318u;
    // 0x1e531c: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5318u, 0x1E5320u)) {
        return;
    }
    ctx->pc = 0x1E5320u;
label_1e5320:
    // 0x1e5320: 0x261e0180  addiu       $fp, $s0, 0x180
    ctx->pc = 0x1e5320u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x1e5324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e5324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5328: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1e5328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e532c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1e532cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1e5330: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x1e5330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x1e5334: 0x51238  dsll        $v0, $a1, 8
    ctx->pc = 0x1e5334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 8);
    // 0x1e5338: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e5338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e533c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e533cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5340: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e5340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e5344: 0x263700a0  addiu       $s7, $s1, 0xA0
    ctx->pc = 0x1e5344u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1e5348: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5348u;
    SET_GPR_U32(ctx, 31, 0x1E5350u);
    ctx->pc = 0x1E534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5348u;
    // 0x1e534c: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5348u, 0x1E5350u)) {
        return;
    }
    ctx->pc = 0x1E5350u;
label_1e5350:
    // 0x1e5350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e5350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5354: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5354u;
    SET_GPR_U32(ctx, 31, 0x1E535Cu);
    ctx->pc = 0x1E5358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5354u;
    // 0x1e5358: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5354u, 0x1E535Cu)) {
        return;
    }
    ctx->pc = 0x1E535Cu;
label_1e535c:
    // 0x1e535c: 0x2610017f  addiu       $s0, $s0, 0x17F
    ctx->pc = 0x1e535cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 383));
    // 0x1e5360: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e5360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e5364: 0x1083b8  dsll        $s0, $s0, 14
    ctx->pc = 0x1e5364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 14);
    // 0x1e5368: 0x24031800  addiu       $v1, $zero, 0x1800
    ctx->pc = 0x1e5368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1e536c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1e536cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1e5370: 0x2631009f  addiu       $s1, $s1, 0x9F
    ctx->pc = 0x1e5370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 159));
    // 0x1e5374: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1e5374u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1e5378: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x1e5378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1e537c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e5380: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1e5380u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1e5384: 0x1188bc  dsll32      $s1, $s1, 2
    ctx->pc = 0x1e5384u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 2));
    // 0x1e5388: 0x2112825  or          $a1, $s0, $s1
    ctx->pc = 0x1e5388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x1e538c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E538Cu;
    SET_GPR_U32(ctx, 31, 0x1E5394u);
    ctx->pc = 0x1E5390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E538Cu;
    // 0x1e5390: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E538Cu, 0x1E5394u)) {
        return;
    }
    ctx->pc = 0x1E5394u;
label_1e5394:
    // 0x1e5394: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x1e5394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e5398: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1e5398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1e539c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e539cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e53a0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1e53a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e53a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e53a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e53a8: 0xc440e764  lwc1        $f0, -0x189C($v0)
    ctx->pc = 0x1e53a8u;
    { uint32_t bits = FAST_READ32(0x33E764u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e53ac: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1e53acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1e53b0: 0x34210fd0  ori         $at, $at, 0xFD0
    ctx->pc = 0x1e53b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4048);
    // 0x1e53b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e53b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e53b8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e53b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e53bc: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x1e53bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
    // 0x1e53c0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e53c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e53c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e53c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e53c8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1e53c8u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[3]);
    // 0x1e53cc: 0xc6b5e760  lwc1        $f21, -0x18A0($s5)
    ctx->pc = 0x1e53ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294960992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e53d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e53d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e53d4: 0x8c62830c  lw          $v0, -0x7CF4($v1)
    ctx->pc = 0x1e53d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33830Cu));
    // 0x1e53d8: 0xc685e758  lwc1        $f5, -0x18A8($s4)
    ctx->pc = 0x1e53d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294960984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e53dc: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x1e53dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x1e53e0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e53e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e53e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e53e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e53e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e53e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e53ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e53ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1e53f0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e53f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e53f4: 0x34210fd0  ori         $at, $at, 0xFD0
    ctx->pc = 0x1e53f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4048);
    // 0x1e53f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e53f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e53fc: 0x8c430198  lw          $v1, 0x198($v0)
    ctx->pc = 0x1e53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x1e5400: 0x0  nop
    ctx->pc = 0x1e5400u;
    // NOP
    // 0x1e5404: 0x0  nop
    ctx->pc = 0x1e5404u;
    // NOP
    // 0x1e5408: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x1e5408u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[4]);
    // 0x1e540c: 0x0  nop
    ctx->pc = 0x1e540cu;
    // NOP
    // 0x1e5410: 0x0  nop
    ctx->pc = 0x1e5410u;
    // NOP
    // 0x1e5414: 0x46050e03  div.s       $f24, $f1, $f5
    ctx->pc = 0x1e5414u;
    ctx->f[24] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[5]);
    // 0x1e5418: 0x0  nop
    ctx->pc = 0x1e5418u;
    // NOP
    // 0x1e541c: 0x0  nop
    ctx->pc = 0x1e541cu;
    // NOP
    // 0x1e5420: 0x4602ad43  div.s       $f21, $f21, $f2
    ctx->pc = 0x1e5420u;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[2]);
    // 0x1e5424: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5424u;
    {
        const bool branch_taken_0x1e5424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5424u;
        // 0x1e5428: 0x46030500  add.s       $f20, $f0, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5424) {
            ctx->pc = 0x1E5440u;
            goto label_1e5440;
        }
    }
    ctx->pc = 0x1E542Cu;
    // 0x1e542c: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x1e542cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
    // 0x1e5430: 0x3421aaa8  ori         $at, $at, 0xAAA8
    ctx->pc = 0x1e5430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43688);
    // 0x1e5434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e5434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5438: 0x0  nop
    ctx->pc = 0x1e5438u;
    // NOP
    // 0x1e543c: 0x4600b583  div.s       $f22, $f22, $f0
    ctx->pc = 0x1e543cu;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[0]);
label_1e5440:
    // 0x1e5440: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e5440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5444: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e5444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5448: 0x0  nop
    ctx->pc = 0x1e5448u;
    // NOP
    // 0x1e544c: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1e544cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x1e5450: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e5454: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1e5454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e5458: 0x18400042  blez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1E5458u;
    {
        const bool branch_taken_0x1e5458 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5458u;
        // 0x1e545c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5458) {
            ctx->pc = 0x1E5564u;
            goto label_1e5564;
        }
    }
    ctx->pc = 0x1E5460u;
    // 0x1e5460: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e5460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e5464: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1e5464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1e5468: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1e5468u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e546c: 0x24161400  addiu       $s6, $zero, 0x1400
    ctx->pc = 0x1e546cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x1e5470: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e5470u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5474: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e5474u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e5478:
    // 0x1e5478: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1E5478u;
    SET_GPR_U32(ctx, 31, 0x1E5480u);
    ctx->pc = 0x1E547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5478u;
    // 0x1e547c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1E5478u, 0x1E5480u)) {
        return;
    }
    ctx->pc = 0x1E5480u;
label_1e5480:
    // 0x1e5480: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1e5480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1e5484: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e5484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e5488: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1e5488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1e548c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e548cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e5490: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1e5490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1e5494: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x1E5494u;
    SET_GPR_U32(ctx, 31, 0x1E549Cu);
    ctx->pc = 0x1E5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5494u;
    // 0x1e5498: 0x4618a500  add.s       $f20, $f20, $f24 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1E5494u, 0x1E549Cu)) {
        return;
    }
    ctx->pc = 0x1E549Cu;
label_1e549c:
    // 0x1e549c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1e549cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1e54a0: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1e54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1e54a4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1e54a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e54a8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e54a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1e54ac: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1e54acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1e54b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e54b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e54b4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1e54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e54b8: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1e54b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1e54bc: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1e54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1e54c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e54c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e54c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e54c8: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1e54c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1e54cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e54ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e54d0: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1e54d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1e54d4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e54d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e54d8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e54d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e54dc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E54DCu;
    SET_GPR_U32(ctx, 31, 0x1E54E4u);
    ctx->pc = 0x1E54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54DCu;
    // 0x1e54e0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E54DCu, 0x1E54E4u)) {
        return;
    }
    ctx->pc = 0x1E54E4u;
label_1e54e4:
    // 0x1e54e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e54e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e54e8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E54E8u;
    SET_GPR_U32(ctx, 31, 0x1E54F0u);
    ctx->pc = 0x1E54ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54E8u;
    // 0x1e54ec: 0x2d52825  or          $a1, $s6, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E54E8u, 0x1E54F0u)) {
        return;
    }
    ctx->pc = 0x1E54F0u;
label_1e54f0:
    // 0x1e54f0: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x1e54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1e54f4: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1e54f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1e54f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e54f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e54fc: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x1e54fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1e5500: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x1e5500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1e5504: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x1e5504u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x1e5508: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1e5508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e550c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5510: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5510u;
    SET_GPR_U32(ctx, 31, 0x1E5518u);
    ctx->pc = 0x1E5514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5510u;
    // 0x1e5514: 0x2302825  or          $a1, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5510u, 0x1E5518u)) {
        return;
    }
    ctx->pc = 0x1E5518u;
label_1e5518:
    // 0x1e5518: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1e5518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e551c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e5520: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1e5520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e5524: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x1e5524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1e5528: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x1e5528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1e552c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1e552cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
    // 0x1e5530: 0x24c50003  addiu       $a1, $a2, 0x3
    ctx->pc = 0x1e5530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1e5534: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x1e5534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1e5538: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e5538u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e553c: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x1e553cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6));
    // 0x1e5540: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e5540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5544: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1e5544u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1e5548: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e5548u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e554c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e554cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1e5550: 0x24a51400  addiu       $a1, $a1, 0x1400
    ctx->pc = 0x1e5550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5120));
    // 0x1e5554: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5554u;
    SET_GPR_U32(ctx, 31, 0x1E555Cu);
    ctx->pc = 0x1E5558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5554u;
    // 0x1e5558: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5554u, 0x1E555Cu)) {
        return;
    }
    ctx->pc = 0x1E555Cu;
label_1e555c:
    // 0x1e555c: 0x1640ffc6  bnez        $s2, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1E555Cu;
    {
        const bool branch_taken_0x1e555c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E555Cu;
        // 0x1e5560: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e555c) {
            ctx->pc = 0x1E5478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5478;
        }
    }
    ctx->pc = 0x1E5564u;
label_1e5564:
    // 0x1e5564: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e5564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e5568: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5568u;
    SET_GPR_U32(ctx, 31, 0x1E5570u);
    ctx->pc = 0x1E556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5568u;
    // 0x1e556c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5568u, 0x1E5570u)) {
        return;
    }
    ctx->pc = 0x1E5570u;
label_1e5570:
    // 0x1e5570: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e5570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e5574: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e5574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5578: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e5578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e557c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e557cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5580: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e5580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5584: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e5584u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5588: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e5588u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e558c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e558cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5590: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e5590u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5598: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x1e5598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1e559c: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x1e559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e55a0: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x1e55a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e55a4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1e55a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e55a8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1e55a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e55ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E55ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55ACu;
        // 0x1e55b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E55ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E55B4u;
    // 0x1e55b4: 0x0  nop
    ctx->pc = 0x1e55b4u;
    // NOP
    ctx->pc = 0x1e55b8u;
}
