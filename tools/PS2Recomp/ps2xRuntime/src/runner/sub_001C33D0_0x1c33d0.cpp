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

// Function: sub_001C33D0
// Address: 0x1c33d0 - 0x1c3550
void sub_001C33D0_0x1c33d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C33D0_0x1c33d0");
#endif

    switch (ctx->pc) {
        case 0x1c3454u: goto label_1c3454;
        case 0x1c3464u: goto label_1c3464;
        case 0x1c3490u: goto label_1c3490;
        case 0x1c34c4u: goto label_1c34c4;
        case 0x1c34e4u: goto label_1c34e4;
        case 0x1c3510u: goto label_1c3510;
        case 0x1c3540u: goto label_1c3540;
        default: break;
    }

    ctx->pc = 0x1c33d0u;

    // 0x1c33d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c33d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c33d4: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x1c33d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c33d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c33d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c33dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c33dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1c33e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c33e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33e4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1c33e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c33e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c33e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c33ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c33f0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1c33f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1c33f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c33f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c33f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c33f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c33fc: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1C33FCu;
    {
        const bool branch_taken_0x1c33fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33FCu;
        // 0x1c3400: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33fc) {
            ctx->pc = 0x1C3550u;
            return;
        }
    }
    ctx->pc = 0x1C3404u;
    // 0x1c3404: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c3404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c3408: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1c3408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c340c: 0x2442e0e0  addiu       $v0, $v0, -0x1F20
    ctx->pc = 0x1c340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959328));
    // 0x1c3410: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c3410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3414: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c3414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3418: 0x800008  jr          $a0
    ctx->pc = 0x1C3418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3420u: goto label_1c3420;
            case 0x1C3434u: goto label_1c3434;
            case 0x1C346Cu: goto label_1c346c;
            case 0x1C3518u: goto label_1c3518;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3418u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C3420u;
label_1c3420:
    // 0x1c3420: 0x24100034  addiu       $s0, $zero, 0x34
    ctx->pc = 0x1c3420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c3424: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x1c3424u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x1c3428: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1c3428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c342c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C342Cu;
    {
        const bool branch_taken_0x1c342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C342Cu;
        // 0x1c3430: 0x2631e090  addiu       $s1, $s1, -0x1F70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c342c) {
            ctx->pc = 0x1C3444u;
            goto label_1c3444;
        }
    }
    ctx->pc = 0x1C3434u;
label_1c3434:
    // 0x1c3434: 0x24100034  addiu       $s0, $zero, 0x34
    ctx->pc = 0x1c3434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c3438: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x1c3438u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x1c343c: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1c343cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c3440: 0x2631e0a0  addiu       $s1, $s1, -0x1F60
    ctx->pc = 0x1c3440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959264));
label_1c3444:
    // 0x1c3444: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1c3444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1c3448: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1c3448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c344c: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x1C344Cu;
    SET_GPR_U32(ctx, 31, 0x1C3454u);
    ctx->pc = 0x1C3450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C344Cu;
    // 0x1c3450: 0x261002a0  addiu       $s0, $s0, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x1C344Cu, 0x1C3454u)) {
        return;
    }
    ctx->pc = 0x1C3454u;
label_1c3454:
    // 0x1c3454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c345c: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x1C345Cu;
    SET_GPR_U32(ctx, 31, 0x1C3464u);
    ctx->pc = 0x1C3460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C345Cu;
    // 0x1c3460: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1C345Cu, 0x1C3464u)) {
        return;
    }
    ctx->pc = 0x1C3464u;
label_1c3464:
    // 0x1c3464: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C3464u;
    {
        const bool branch_taken_0x1c3464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3464u;
        // 0x1c3468: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3464) {
            ctx->pc = 0x1C3554u;
            return;
        }
    }
    ctx->pc = 0x1C346Cu;
label_1c346c:
    // 0x1c346c: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x1c346cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
    // 0x1c3470: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c3470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3474: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1c3474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1c3478: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c3478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c347c: 0x0  nop
    ctx->pc = 0x1c347cu;
    // NOP
    // 0x1c3480: 0x0  nop
    ctx->pc = 0x1c3480u;
    // NOP
    // 0x1c3484: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x1c3484u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[12]);
    // 0x1c3488: 0xc09b12a  jal         func_26C4A8
    ctx->pc = 0x1C3488u;
    SET_GPR_U32(ctx, 31, 0x1C3490u);
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x1C3488u, 0x1C3490u)) {
        return;
    }
    ctx->pc = 0x1C3490u;
label_1c3490:
    // 0x1c3490: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c3490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c3494: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1c3494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1c3498: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1c3498u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c349c: 0x0  nop
    ctx->pc = 0x1c349cu;
    // NOP
    // 0x1c34a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c34a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c34a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c34a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c34a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c34a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c34ac: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x1c34acu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1c34b0: 0x0  nop
    ctx->pc = 0x1c34b0u;
    // NOP
    // 0x1c34b4: 0x0  nop
    ctx->pc = 0x1c34b4u;
    // NOP
    // 0x1c34b8: 0x4614ab03  div.s       $f12, $f21, $f20
    ctx->pc = 0x1c34b8u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[20]);
    // 0x1c34bc: 0xc09b12a  jal         func_26C4A8
    ctx->pc = 0x1C34BCu;
    SET_GPR_U32(ctx, 31, 0x1C34C4u);
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x1C34BCu, 0x1C34C4u)) {
        return;
    }
    ctx->pc = 0x1C34C4u;
label_1c34c4:
    // 0x1c34c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c34c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c34c8: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1c34c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1c34cc: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1c34ccu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c34d0: 0x0  nop
    ctx->pc = 0x1c34d0u;
    // NOP
    // 0x1c34d4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1c34d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c34d8: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1c34d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1c34dc: 0xc09b12a  jal         func_26C4A8
    ctx->pc = 0x1C34DCu;
    SET_GPR_U32(ctx, 31, 0x1C34E4u);
    ctx->pc = 0x1C34E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34DCu;
    // 0x1c34e0: 0x460cab01  sub.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x1C34DCu, 0x1C34E4u)) {
        return;
    }
    ctx->pc = 0x1C34E4u;
label_1c34e4:
    // 0x1c34e4: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1c34e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c34e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c34e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c34ec: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1c34ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c34f0: 0x2441018  mult        $v0, $s2, $a0
    ctx->pc = 0x1c34f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c34f4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c34f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c34f8: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50
    ctx->pc = 0x1c34f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
    // 0x1c34fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c34fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3500: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c3500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3504: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c3504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c3508: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x1C3508u;
    SET_GPR_U32(ctx, 31, 0x1C3510u);
    ctx->pc = 0x1C350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3508u;
    // 0x1c350c: 0x248402a0  addiu       $a0, $a0, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1C3508u, 0x1C3510u)) {
        return;
    }
    ctx->pc = 0x1C3510u;
label_1c3510:
    // 0x1c3510: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C3510u;
    {
        const bool branch_taken_0x1c3510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3510u;
        // 0x1c3514: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3510) {
            ctx->pc = 0x1C3554u;
            return;
        }
    }
    ctx->pc = 0x1C3518u;
label_1c3518:
    // 0x1c3518: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1c3518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1c351c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c351cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3520: 0x24100034  addiu       $s0, $zero, 0x34
    ctx->pc = 0x1c3520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c3524: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1c3524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c3528: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x1c3528u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x1c352c: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x1c352cu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[12]);
    // 0x1c3530: 0x2631e0d0  addiu       $s1, $s1, -0x1F30
    ctx->pc = 0x1c3530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959312));
    // 0x1c3534: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1c3534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c3538: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x1C3538u;
    SET_GPR_U32(ctx, 31, 0x1C3540u);
    ctx->pc = 0x1C353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3538u;
    // 0x1c353c: 0x261002a0  addiu       $s0, $s0, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x1C3538u, 0x1C3540u)) {
        return;
    }
    ctx->pc = 0x1C3540u;
label_1c3540:
    // 0x1c3540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3544: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3548: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x1C3548u;
    SET_GPR_U32(ctx, 31, 0x1C3550u);
    ctx->pc = 0x1C354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3548u;
    // 0x1c354c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1C3548u, 0x1C3550u)) {
        return;
    }
    ctx->pc = 0x1C3550u;
}
