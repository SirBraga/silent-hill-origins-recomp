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

// Function: sub_001CE2E0
// Address: 0x1ce2e0 - 0x1ce720
void sub_001CE2E0_0x1ce2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE2E0_0x1ce2e0");
#endif

    switch (ctx->pc) {
        case 0x1ce33cu: goto label_1ce33c;
        case 0x1ce398u: goto label_1ce398;
        case 0x1ce3b8u: goto label_1ce3b8;
        case 0x1ce3c8u: goto label_1ce3c8;
        case 0x1ce418u: goto label_1ce418;
        case 0x1ce424u: goto label_1ce424;
        case 0x1ce42cu: goto label_1ce42c;
        case 0x1ce488u: goto label_1ce488;
        case 0x1ce494u: goto label_1ce494;
        case 0x1ce4d0u: goto label_1ce4d0;
        case 0x1ce4e0u: goto label_1ce4e0;
        case 0x1ce518u: goto label_1ce518;
        case 0x1ce524u: goto label_1ce524;
        case 0x1ce538u: goto label_1ce538;
        case 0x1ce548u: goto label_1ce548;
        case 0x1ce58cu: goto label_1ce58c;
        case 0x1ce598u: goto label_1ce598;
        case 0x1ce5c4u: goto label_1ce5c4;
        case 0x1ce5d4u: goto label_1ce5d4;
        case 0x1ce61cu: goto label_1ce61c;
        case 0x1ce628u: goto label_1ce628;
        case 0x1ce63cu: goto label_1ce63c;
        case 0x1ce650u: goto label_1ce650;
        case 0x1ce6b4u: goto label_1ce6b4;
        case 0x1ce6c0u: goto label_1ce6c0;
        case 0x1ce6d4u: goto label_1ce6d4;
        default: break;
    }

    ctx->pc = 0x1ce2e0u;

    // 0x1ce2e0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x1ce2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x1ce2e4: 0x7fb102a0  sq          $s1, 0x2A0($sp)
    ctx->pc = 0x1ce2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 17));
    // 0x1ce2e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2ec: 0x7fb20290  sq          $s2, 0x290($sp)
    ctx->pc = 0x1ce2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 18));
    // 0x1ce2f0: 0x7fb40270  sq          $s4, 0x270($sp)
    ctx->pc = 0x1ce2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 20));
    // 0x1ce2f4: 0x7fb50260  sq          $s5, 0x260($sp)
    ctx->pc = 0x1ce2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 21));
    // 0x1ce2f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ce2f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2fc: 0x7fb60250  sq          $s6, 0x250($sp)
    ctx->pc = 0x1ce2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 22));
    // 0x1ce300: 0x7fb70240  sq          $s7, 0x240($sp)
    ctx->pc = 0x1ce300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 23));
    // 0x1ce304: 0x7fbe0230  sq          $fp, 0x230($sp)
    ctx->pc = 0x1ce304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 30));
    // 0x1ce308: 0xe7b802e0  swc1        $f24, 0x2E0($sp)
    ctx->pc = 0x1ce308u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x1ce30c: 0x3c1e006a  lui         $fp, 0x6A
    ctx->pc = 0x1ce30cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)106 << 16));
    // 0x1ce310: 0xe7b502c8  swc1        $f21, 0x2C8($sp)
    ctx->pc = 0x1ce310u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
    // 0x1ce314: 0xe7b402c0  swc1        $f20, 0x2C0($sp)
    ctx->pc = 0x1ce314u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    // 0x1ce318: 0xafa50210  sw          $a1, 0x210($sp)
    ctx->pc = 0x1ce318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
    // 0x1ce31c: 0x7fb002b0  sq          $s0, 0x2B0($sp)
    ctx->pc = 0x1ce31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 16));
    // 0x1ce320: 0x7fb30280  sq          $s3, 0x280($sp)
    ctx->pc = 0x1ce320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 19));
    // 0x1ce324: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x1ce324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
    // 0x1ce328: 0xe7ba02f0  swc1        $f26, 0x2F0($sp)
    ctx->pc = 0x1ce328u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x1ce32c: 0xe7b902e8  swc1        $f25, 0x2E8($sp)
    ctx->pc = 0x1ce32cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x1ce330: 0xe7b702d8  swc1        $f23, 0x2D8($sp)
    ctx->pc = 0x1ce330u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
    // 0x1ce334: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1CE334u;
    SET_GPR_U32(ctx, 31, 0x1CE33Cu);
    ctx->pc = 0x1CE338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE334u;
    // 0x1ce338: 0xe7b602d0  swc1        $f22, 0x2D0($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1CE334u, 0x1CE33Cu)) {
        return;
    }
    ctx->pc = 0x1CE33Cu;
label_1ce33c:
    // 0x1ce33c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1ce33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ce340: 0x27a20014  addiu       $v0, $sp, 0x14
    ctx->pc = 0x1ce340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1ce344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce348: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce34c: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x1ce34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x1ce350: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1ce350u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ce354: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x1ce354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1ce358: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1ce358u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce35c: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x1ce35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x1ce360: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1ce360u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1ce364: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x1ce364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ce368: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x1ce368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
    // 0x1ce36c: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x1ce36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1ce370: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x1ce370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce374: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ce374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ce378: 0x0  nop
    ctx->pc = 0x1ce378u;
    // NOP
    // 0x1ce37c: 0x0  nop
    ctx->pc = 0x1ce37cu;
    // NOP
    // 0x1ce380: 0x46010603  div.s       $f24, $f0, $f1
    ctx->pc = 0x1ce380u;
    ctx->f[24] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1ce384: 0x245204e8  addiu       $s2, $v0, 0x4E8
    ctx->pc = 0x1ce384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1256));
    // 0x1ce388: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1ce388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1ce38c: 0x24570fc8  addiu       $s7, $v0, 0xFC8
    ctx->pc = 0x1ce38cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x1ce390: 0x2622026c  addiu       $v0, $s1, 0x26C
    ctx->pc = 0x1ce390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 620));
    // 0x1ce394: 0x0  nop
    ctx->pc = 0x1ce394u;
    // NOP
label_1ce398:
    // 0x1ce398: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1ce398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1ce39c: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x1ce39cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ce3a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ce3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce3a4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ce3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ce3a8: 0x1043003a  beq         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1CE3A8u;
    {
        const bool branch_taken_0x1ce3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3A8u;
        // 0x1ce3ac: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3a8) {
            ctx->pc = 0x1CE494u;
            goto label_1ce494;
        }
    }
    ctx->pc = 0x1CE3B0u;
    // 0x1ce3b0: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CE3B0u;
    SET_GPR_U32(ctx, 31, 0x1CE3B8u);
    ctx->pc = 0x1CE3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3B0u;
    // 0x1ce3b4: 0x8c4402b4  lw          $a0, 0x2B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CE3B0u, 0x1CE3B8u)) {
        return;
    }
    ctx->pc = 0x1CE3B8u;
label_1ce3b8:
    // 0x1ce3b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3c0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CE3C0u;
    SET_GPR_U32(ctx, 31, 0x1CE3C8u);
    ctx->pc = 0x1CE3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3C0u;
    // 0x1ce3c4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CE3C0u, 0x1CE3C8u)) {
        return;
    }
    ctx->pc = 0x1CE3C8u;
label_1ce3c8:
    // 0x1ce3c8: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x1ce3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ce3cc: 0xc6f00018  lwc1        $f16, 0x18($s7)
    ctx->pc = 0x1ce3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ce3d0: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x1ce3d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1ce3d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ce3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce3d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ce3d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ce3dc: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x1ce3dcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x1ce3e0: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1ce3e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ce3e4: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1ce3e4u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x1ce3e8: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1ce3e8u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
    // 0x1ce3ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3f0: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x1ce3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1ce3f4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1ce3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ce3f8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1ce3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3fc: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1ce3fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce400: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1ce400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce404: 0x27c50490  addiu       $a1, $fp, 0x490
    ctx->pc = 0x1ce404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1168));
    // 0x1ce408: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x1ce408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce40c: 0xc4ee0008  lwc1        $f14, 0x8($a3)
    ctx->pc = 0x1ce40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce410: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CE410u;
    SET_GPR_U32(ctx, 31, 0x1CE418u);
    ctx->pc = 0x1CE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE410u;
    // 0x1ce414: 0xc50f000c  lwc1        $f15, 0xC($t0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CE410u, 0x1CE418u)) {
        return;
    }
    ctx->pc = 0x1CE418u;
label_1ce418:
    // 0x1ce418: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ce418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce41c: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CE41Cu;
    SET_GPR_U32(ctx, 31, 0x1CE424u);
    ctx->pc = 0x1CE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE41Cu;
    // 0x1ce420: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CE41Cu, 0x1CE424u)) {
        return;
    }
    ctx->pc = 0x1CE424u;
label_1ce424:
    // 0x1ce424: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CE424u;
    SET_GPR_U32(ctx, 31, 0x1CE42Cu);
    ctx->pc = 0x1CE428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE424u;
    // 0x1ce428: 0x8e24029c  lw          $a0, 0x29C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CE424u, 0x1CE42Cu)) {
        return;
    }
    ctx->pc = 0x1CE42Cu;
label_1ce42c:
    // 0x1ce42c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ce42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ce430: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1ce430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ce434: 0x24420514  addiu       $v0, $v0, 0x514
    ctx->pc = 0x1ce434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1300));
    // 0x1ce438: 0xc6f00018  lwc1        $f16, 0x18($s7)
    ctx->pc = 0x1ce438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ce43c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1ce43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ce440: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ce444: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1ce444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1ce448: 0x24a502e8  addiu       $a1, $a1, 0x2E8
    ctx->pc = 0x1ce448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 744));
    // 0x1ce44c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ce44cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce454: 0xc4cf0000  lwc1        $f15, 0x0($a2)
    ctx->pc = 0x1ce454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce458: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1ce458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1ce45c: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x1ce45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce460: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce464: 0xc46d0024  lwc1        $f13, 0x24($v1)
    ctx->pc = 0x1ce464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce468: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x1ce468u;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x1ce46c: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x1ce46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce470: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1ce470u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x1ce474: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ce474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ce478: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1ce478u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
    // 0x1ce47c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1ce47cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ce480: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CE480u;
    SET_GPR_U32(ctx, 31, 0x1CE488u);
    ctx->pc = 0x1CE484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE480u;
    // 0x1ce484: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CE480u, 0x1CE488u)) {
        return;
    }
    ctx->pc = 0x1CE488u;
label_1ce488:
    // 0x1ce488: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce48c: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CE48Cu;
    SET_GPR_U32(ctx, 31, 0x1CE494u);
    ctx->pc = 0x1CE490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE48Cu;
    // 0x1ce490: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CE48Cu, 0x1CE494u)) {
        return;
    }
    ctx->pc = 0x1CE494u;
label_1ce494:
    // 0x1ce494: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ce494u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ce498: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1ce498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ce49c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1CE49Cu;
    {
        const bool branch_taken_0x1ce49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE49Cu;
        // 0x1ce4a0: 0x2622026c  addiu       $v0, $s1, 0x26C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce49c) {
            ctx->pc = 0x1CE398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce398;
        }
    }
    ctx->pc = 0x1CE4A4u;
    // 0x1ce4a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ce4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ce4a8: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x1ce4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1ce4ac: 0x245e0498  addiu       $fp, $v0, 0x498
    ctx->pc = 0x1ce4acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1176));
    // 0x1ce4b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce4b4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1ce4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1ce4b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ce4b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4bc: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x1ce4bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4c0: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x1ce4c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ce4c4: 0x27d7000c  addiu       $s7, $fp, 0xC
    ctx->pc = 0x1ce4c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x1ce4c8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x1ce4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4cc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ce4ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce4d0:
    // 0x1ce4d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ce4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4d8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CE4D8u;
    SET_GPR_U32(ctx, 31, 0x1CE4E0u);
    ctx->pc = 0x1CE4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4D8u;
    // 0x1ce4dc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CE4D8u, 0x1CE4E0u)) {
        return;
    }
    ctx->pc = 0x1CE4E0u;
label_1ce4e0:
    // 0x1ce4e0: 0x3d51021  addu        $v0, $fp, $s5
    ctx->pc = 0x1ce4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
    // 0x1ce4e4: 0xc6170000  lwc1        $f23, 0x0($s0)
    ctx->pc = 0x1ce4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ce4e8: 0xc6150004  lwc1        $f21, 0x4($s0)
    ctx->pc = 0x1ce4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce4ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ce4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4f0: 0xc6f60000  lwc1        $f22, 0x0($s7)
    ctx->pc = 0x1ce4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ce4f4: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x1ce4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce4f8: 0x8fa50214  lw          $a1, 0x214($sp)
    ctx->pc = 0x1ce4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1ce4fc: 0x8fa7021c  lw          $a3, 0x21C($sp)
    ctx->pc = 0x1ce4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x1ce500: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x1ce500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1ce504: 0xe7b70010  swc1        $f23, 0x10($sp)
    ctx->pc = 0x1ce504u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ce508: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1ce508u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ce50c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1ce50cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1ce510: 0xc06cda0  jal         func_1B3680
    ctx->pc = 0x1CE510u;
    SET_GPR_U32(ctx, 31, 0x1CE518u);
    ctx->pc = 0x1CE514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE510u;
    // 0x1ce514: 0xe7b6001c  swc1        $f22, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1CE510u, 0x1CE518u)) {
        return;
    }
    ctx->pc = 0x1CE518u;
label_1ce518:
    // 0x1ce518: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1ce518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ce51c: 0xc06dc32  jal         func_1B70C8
    ctx->pc = 0x1CE51Cu;
    SET_GPR_U32(ctx, 31, 0x1CE524u);
    ctx->pc = 0x1CE520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE51Cu;
    // 0x1ce520: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1CE51Cu, 0x1CE524u)) {
        return;
    }
    ctx->pc = 0x1CE524u;
label_1ce524:
    // 0x1ce524: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CE524u;
    {
        const bool branch_taken_0x1ce524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE524u;
        // 0x1ce528: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce524) {
            ctx->pc = 0x1CE598u;
            goto label_1ce598;
        }
    }
    ctx->pc = 0x1CE52Cu;
    // 0x1ce52c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ce52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ce530: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CE530u;
    SET_GPR_U32(ctx, 31, 0x1CE538u);
    ctx->pc = 0x1CE534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE530u;
    // 0x1ce534: 0x8c4402d8  lw          $a0, 0x2D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CE530u, 0x1CE538u)) {
        return;
    }
    ctx->pc = 0x1CE538u;
label_1ce538:
    // 0x1ce538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce53c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce540: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CE540u;
    SET_GPR_U32(ctx, 31, 0x1CE548u);
    ctx->pc = 0x1CE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE540u;
    // 0x1ce544: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CE540u, 0x1CE548u)) {
        return;
    }
    ctx->pc = 0x1CE548u;
label_1ce548:
    // 0x1ce548: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1ce548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1ce54c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce550: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x1ce550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x1ce554: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1ce554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1ce558: 0xc4500018  lwc1        $f16, 0x18($v0)
    ctx->pc = 0x1ce558u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ce55c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1ce55cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1ce560: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ce560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ce564: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1ce564u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1ce568: 0x24450490  addiu       $a1, $v0, 0x490
    ctx->pc = 0x1ce568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1168));
    // 0x1ce56c: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x1ce56cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x1ce570: 0xe7b90000  swc1        $f25, 0x0($sp)
    ctx->pc = 0x1ce570u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ce574: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x1ce574u;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x1ce578: 0xe7b90008  swc1        $f25, 0x8($sp)
    ctx->pc = 0x1ce578u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ce57c: 0x4600d486  mov.s       $f18, $f26
    ctx->pc = 0x1ce57cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[26]);
    // 0x1ce580: 0x4600d4c6  mov.s       $f19, $f26
    ctx->pc = 0x1ce580u;
    ctx->f[19] = FPU_MOV_S(ctx->f[26]);
    // 0x1ce584: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CE584u;
    SET_GPR_U32(ctx, 31, 0x1CE58Cu);
    ctx->pc = 0x1CE588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE584u;
    // 0x1ce588: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CE584u, 0x1CE58Cu)) {
        return;
    }
    ctx->pc = 0x1CE58Cu;
label_1ce58c:
    // 0x1ce58c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce590: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CE590u;
    SET_GPR_U32(ctx, 31, 0x1CE598u);
    ctx->pc = 0x1CE594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE590u;
    // 0x1ce594: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CE590u, 0x1CE598u)) {
        return;
    }
    ctx->pc = 0x1CE598u;
label_1ce598:
    // 0x1ce598: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ce598u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ce59c: 0x26f70014  addiu       $s7, $s7, 0x14
    ctx->pc = 0x1ce59cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x1ce5a0: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x1ce5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1ce5a4: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x1ce5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ce5a8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1CE5A8u;
    {
        const bool branch_taken_0x1ce5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5A8u;
        // 0x1ce5ac: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5a8) {
            ctx->pc = 0x1CE4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce4d0;
        }
    }
    ctx->pc = 0x1CE5B0u;
    // 0x1ce5b0: 0x8e220268  lw          $v0, 0x268($s1)
    ctx->pc = 0x1ce5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
    // 0x1ce5b4: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CE5B4u;
    {
        const bool branch_taken_0x1ce5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce5b4) {
            ctx->pc = 0x1CE5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE5B4u;
            // 0x1ce5b8: 0x8e220280  lw          $v0, 0x280($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE62Cu;
            goto label_1ce62c;
        }
    }
    ctx->pc = 0x1CE5BCu;
    // 0x1ce5bc: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CE5BCu;
    SET_GPR_U32(ctx, 31, 0x1CE5C4u);
    ctx->pc = 0x1CE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5BCu;
    // 0x1ce5c0: 0x8e2402fc  lw          $a0, 0x2FC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CE5BCu, 0x1CE5C4u)) {
        return;
    }
    ctx->pc = 0x1CE5C4u;
label_1ce5c4:
    // 0x1ce5c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ce5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5cc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CE5CCu;
    SET_GPR_U32(ctx, 31, 0x1CE5D4u);
    ctx->pc = 0x1CE5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5CCu;
    // 0x1ce5d0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CE5CCu, 0x1CE5D4u)) {
        return;
    }
    ctx->pc = 0x1CE5D4u;
label_1ce5d4:
    // 0x1ce5d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce5d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce5d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce5dc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1ce5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1ce5e0: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1ce5e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1ce5e4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ce5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ce5e8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1ce5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce5ec: 0x24a50490  addiu       $a1, $a1, 0x490
    ctx->pc = 0x1ce5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
    // 0x1ce5f0: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x1ce5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce5f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ce5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5f8: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x1ce5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce5fc: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x1ce5fcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x1ce600: 0xc62f000c  lwc1        $f15, 0xC($s1)
    ctx->pc = 0x1ce600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce604: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1ce604u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1ce608: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1ce608u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ce60c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ce60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce610: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1ce610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ce614: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CE614u;
    SET_GPR_U32(ctx, 31, 0x1CE61Cu);
    ctx->pc = 0x1CE618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE614u;
    // 0x1ce618: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CE614u, 0x1CE61Cu)) {
        return;
    }
    ctx->pc = 0x1CE61Cu;
label_1ce61c:
    // 0x1ce61c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ce61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce620: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CE620u;
    SET_GPR_U32(ctx, 31, 0x1CE628u);
    ctx->pc = 0x1CE624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE620u;
    // 0x1ce624: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CE620u, 0x1CE628u)) {
        return;
    }
    ctx->pc = 0x1CE628u;
label_1ce628:
    // 0x1ce628: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x1ce628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_1ce62c:
    // 0x1ce62c: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1CE62Cu;
    {
        const bool branch_taken_0x1ce62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce62c) {
            ctx->pc = 0x1CE630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE62Cu;
            // 0x1ce630: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6C4u;
            goto label_1ce6c4;
        }
    }
    ctx->pc = 0x1CE634u;
    // 0x1ce634: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CE634u;
    SET_GPR_U32(ctx, 31, 0x1CE63Cu);
    ctx->pc = 0x1CE638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE634u;
    // 0x1ce638: 0x8e240294  lw          $a0, 0x294($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CE634u, 0x1CE63Cu)) {
        return;
    }
    ctx->pc = 0x1CE63Cu;
label_1ce63c:
    // 0x1ce63c: 0x8e300260  lw          $s0, 0x260($s1)
    ctx->pc = 0x1ce63cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ce640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce644: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ce644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce648: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CE648u;
    SET_GPR_U32(ctx, 31, 0x1CE650u);
    ctx->pc = 0x1CE64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE648u;
    // 0x1ce64c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CE648u, 0x1CE650u)) {
        return;
    }
    ctx->pc = 0x1CE650u;
label_1ce650:
    // 0x1ce650: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x1ce650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce654: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1ce654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1ce658: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1ce658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce65c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ce65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce660: 0x8e250284  lw          $a1, 0x284($s1)
    ctx->pc = 0x1ce660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x1ce664: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x1ce664u;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x1ce668: 0x3c014148  lui         $at, 0x4148
    ctx->pc = 0x1ce668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16712 << 16));
    // 0x1ce66c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce67c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ce67cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ce680: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1ce680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1ce684: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ce684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce688: 0x46016b41  sub.s       $f13, $f13, $f1
    ctx->pc = 0x1ce688u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x1ce68c: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1ce68cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1ce690: 0x24a502e8  addiu       $a1, $a1, 0x2E8
    ctx->pc = 0x1ce690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 744));
    // 0x1ce694: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x1ce694u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1ce698: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1ce698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ce69c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1ce69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1ce6a0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1ce6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ce6a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1ce6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ce6a8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1ce6a8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1ce6ac: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CE6ACu;
    SET_GPR_U32(ctx, 31, 0x1CE6B4u);
    ctx->pc = 0x1CE6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6ACu;
    // 0x1ce6b0: 0x460094c6  mov.s       $f19, $f18 (Delay Slot)
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CE6ACu, 0x1CE6B4u)) {
        return;
    }
    ctx->pc = 0x1CE6B4u;
label_1ce6b4:
    // 0x1ce6b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ce6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6b8: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CE6B8u;
    SET_GPR_U32(ctx, 31, 0x1CE6C0u);
    ctx->pc = 0x1CE6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6B8u;
    // 0x1ce6bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CE6B8u, 0x1CE6C0u)) {
        return;
    }
    ctx->pc = 0x1CE6C0u;
label_1ce6c0:
    // 0x1ce6c0: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1ce6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1ce6c4:
    // 0x1ce6c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE6C4u;
    {
        const bool branch_taken_0x1ce6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6C4u;
        // 0x1ce6c8: 0x7bb002b0  lq          $s0, 0x2B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6c4) {
            ctx->pc = 0x1CE6D8u;
            goto label_1ce6d8;
        }
    }
    ctx->pc = 0x1CE6CCu;
    // 0x1ce6cc: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1CE6CCu;
    SET_GPR_U32(ctx, 31, 0x1CE6D4u);
    ctx->pc = 0x1CE6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6CCu;
    // 0x1ce6d0: 0x8fa50210  lw          $a1, 0x210($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1CE6CCu, 0x1CE6D4u)) {
        return;
    }
    ctx->pc = 0x1CE6D4u;
label_1ce6d4:
    // 0x1ce6d4: 0x7bb002b0  lq          $s0, 0x2B0($sp)
    ctx->pc = 0x1ce6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_1ce6d8:
    // 0x1ce6d8: 0x7bb102a0  lq          $s1, 0x2A0($sp)
    ctx->pc = 0x1ce6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1ce6dc: 0x7bb20290  lq          $s2, 0x290($sp)
    ctx->pc = 0x1ce6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1ce6e0: 0x7bb30280  lq          $s3, 0x280($sp)
    ctx->pc = 0x1ce6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1ce6e4: 0x7bb40270  lq          $s4, 0x270($sp)
    ctx->pc = 0x1ce6e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1ce6e8: 0x7bb50260  lq          $s5, 0x260($sp)
    ctx->pc = 0x1ce6e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1ce6ec: 0x7bb60250  lq          $s6, 0x250($sp)
    ctx->pc = 0x1ce6ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1ce6f0: 0x7bb70240  lq          $s7, 0x240($sp)
    ctx->pc = 0x1ce6f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1ce6f4: 0x7bbe0230  lq          $fp, 0x230($sp)
    ctx->pc = 0x1ce6f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1ce6f8: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x1ce6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1ce6fc: 0xc7ba02f0  lwc1        $f26, 0x2F0($sp)
    ctx->pc = 0x1ce6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1ce700: 0xc7b902e8  lwc1        $f25, 0x2E8($sp)
    ctx->pc = 0x1ce700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ce704: 0xc7b802e0  lwc1        $f24, 0x2E0($sp)
    ctx->pc = 0x1ce704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ce708: 0xc7b702d8  lwc1        $f23, 0x2D8($sp)
    ctx->pc = 0x1ce708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ce70c: 0xc7b602d0  lwc1        $f22, 0x2D0($sp)
    ctx->pc = 0x1ce70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ce710: 0xc7b502c8  lwc1        $f21, 0x2C8($sp)
    ctx->pc = 0x1ce710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce714: 0xc7b402c0  lwc1        $f20, 0x2C0($sp)
    ctx->pc = 0x1ce714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce718: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE718u;
        // 0x1ce71c: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE720u;
}
