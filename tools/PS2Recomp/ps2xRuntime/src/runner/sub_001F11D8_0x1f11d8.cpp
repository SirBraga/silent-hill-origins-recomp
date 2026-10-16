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

// Function: sub_001F11D8
// Address: 0x1f11d8 - 0x1f1350
void sub_001F11D8_0x1f11d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F11D8_0x1f11d8");
#endif

    switch (ctx->pc) {
        case 0x1f12e8u: goto label_1f12e8;
        case 0x1f1324u: goto label_1f1324;
        default: break;
    }

    ctx->pc = 0x1f11d8u;

    // 0x1f11d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f11d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f11dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f11dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f11e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f11e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f11e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f11e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f11e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f11ec: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1f11ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f11f0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1f11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f11f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F11F4u;
    {
        const bool branch_taken_0x1f11f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11F4u;
        // 0x1f11f8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11f4) {
            ctx->pc = 0x1F1208u;
            goto label_1f1208;
        }
    }
    ctx->pc = 0x1F11FCu;
    // 0x1f11fc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1f11fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1f1200: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1F1200u;
    {
        const bool branch_taken_0x1f1200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1200u;
        // 0x1f1204: 0xae100014  sw          $s0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1200) {
            ctx->pc = 0x1F132Cu;
            goto label_1f132c;
        }
    }
    ctx->pc = 0x1F1208u;
label_1f1208:
    // 0x1f1208: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f1208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f120c: 0x14710003  bne         $v1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F120Cu;
    {
        const bool branch_taken_0x1f120c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x1F1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F120Cu;
        // 0x1f1210: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f120c) {
            ctx->pc = 0x1F121Cu;
            goto label_1f121c;
        }
    }
    ctx->pc = 0x1F1214u;
    // 0x1f1214: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F1214u;
    {
        const bool branch_taken_0x1f1214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1214u;
        // 0x1f1218: 0xae100014  sw          $s0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1214) {
            ctx->pc = 0x1F132Cu;
            goto label_1f132c;
        }
    }
    ctx->pc = 0x1F121Cu;
label_1f121c:
    // 0x1f121c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F121Cu;
    {
        const bool branch_taken_0x1f121c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f121c) {
            ctx->pc = 0x1F1220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F121Cu;
            // 0x1f1220: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F122Cu;
            goto label_1f122c;
        }
    }
    ctx->pc = 0x1F1224u;
    // 0x1f1224: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1F1224u;
    {
        const bool branch_taken_0x1f1224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1224u;
        // 0x1f1228: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1224) {
            ctx->pc = 0x1F132Cu;
            goto label_1f132c;
        }
    }
    ctx->pc = 0x1F122Cu;
label_1f122c:
    // 0x1f122c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f122cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1230: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1f1230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f1234: 0xc4e80004  lwc1        $f8, 0x4($a3)
    ctx->pc = 0x1f1234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1f1238: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x1f1238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1f123c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1f123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1240: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x1f1240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1f1244: 0xc4940000  lwc1        $f20, 0x0($a0)
    ctx->pc = 0x1f1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f1248: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x1f1248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f124c: 0x46080181  sub.s       $f6, $f0, $f8
    ctx->pc = 0x1f124cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x1f1250: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x1f1250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f1254: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f1254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f1258: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1f1258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f125c: 0x46144502  mul.s       $f20, $f8, $f20
    ctx->pc = 0x1f125cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x1f1260: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x1f1260u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1f1264: 0xc4870008  lwc1        $f7, 0x8($a0)
    ctx->pc = 0x1f1264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1f1268: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1f1268u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1f126c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1f126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f1270: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1f1270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1274: 0x4605a500  add.s       $f20, $f20, $f5
    ctx->pc = 0x1f1274u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[5]);
    // 0x1f1278: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x1f1278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f127c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f127cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f1280: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1f1280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f1284: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1f1284u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1f1288: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x1f1288u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x1f128c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f128cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1290: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x1f1290u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x1f1294: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f1294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1f1298: 0x4604a500  add.s       $f20, $f20, $f4
    ctx->pc = 0x1f1298u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x1f129c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1f129cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1f12a0: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x1f12a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x1f12a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f12a4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x1f12a8: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x1f12a8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1f12ac: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x1f12acu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x1f12b0: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x1f12b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f12b4: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1f12b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f12b8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1f12b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f12bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f12bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f12c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f12c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f12c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f12c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f12c8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1f12c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f12cc: 0xc4e2000c  lwc1        $f2, 0xC($a3)
    ctx->pc = 0x1f12ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f12d0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1f12d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f12d4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f12d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f12d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f12d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f12dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f12dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f12e0: 0xc07c93e  jal         func_1F24F8
    ctx->pc = 0x1F12E0u;
    SET_GPR_U32(ctx, 31, 0x1F12E8u);
    ctx->pc = 0x1F12E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12E0u;
    // 0x1f12e4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F24F8u, 0x1F12E0u, 0x1F12E8u)) {
        return;
    }
    ctx->pc = 0x1F12E8u;
label_1f12e8:
    // 0x1f12e8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1f12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1f12ec: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1f12ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1f12f0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1f12f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f12f4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1f12f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f12f8: 0x0  nop
    ctx->pc = 0x1f12f8u;
    // NOP
    // 0x1f12fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F12FCu;
    {
        const bool branch_taken_0x1f12fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12FCu;
        // 0x1f1300: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12fc) {
            ctx->pc = 0x1F1310u;
            goto label_1f1310;
        }
    }
    ctx->pc = 0x1F1304u;
    // 0x1f1304: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1f1304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f1308: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1308u;
    {
        const bool branch_taken_0x1f1308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1308u;
        // 0x1f130c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1308) {
            ctx->pc = 0x1F131Cu;
            goto label_1f131c;
        }
    }
    ctx->pc = 0x1F1310u;
label_1f1310:
    // 0x1f1310: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1f1310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f1314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1318: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1f1318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f131c:
    // 0x1f131c: 0xc07c956  jal         func_1F2558
    ctx->pc = 0x1F131Cu;
    SET_GPR_U32(ctx, 31, 0x1F1324u);
    ctx->pc = 0x1F2558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2558u, 0x1F131Cu, 0x1F1324u)) {
        return;
    }
    ctx->pc = 0x1F1324u;
label_1f1324:
    // 0x1f1324: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1f1324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1f1328: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x1f1328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
label_1f132c:
    // 0x1f132c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f132cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1330: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f1330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1338: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1f1338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f133c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F133Cu;
        // 0x1f1340: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F133Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1344u;
    // 0x1f1344: 0x0  nop
    ctx->pc = 0x1f1344u;
    // NOP
    // 0x1f1348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f134c: 0x0  nop
    ctx->pc = 0x1f134cu;
    // NOP
    ctx->pc = 0x1f1350u;
}
