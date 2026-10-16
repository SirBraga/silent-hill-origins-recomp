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

// Function: sub_0017A7E8
// Address: 0x17a7e8 - 0x17a940
void sub_0017A7E8_0x17a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A7E8_0x17a7e8");
#endif

    switch (ctx->pc) {
        case 0x17a824u: goto label_17a824;
        case 0x17a860u: goto label_17a860;
        case 0x17a8a0u: goto label_17a8a0;
        case 0x17a8f0u: goto label_17a8f0;
        case 0x17a900u: goto label_17a900;
        case 0x17a910u: goto label_17a910;
        default: break;
    }

    ctx->pc = 0x17a7e8u;

    // 0x17a7e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17a7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17a7ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17a7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17a7f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17a7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17a7f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17a7fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17a800: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a804: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x17a804u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17a808: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x17a808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17a80c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A80Cu;
    {
        const bool branch_taken_0x17a80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A80Cu;
        // 0x17a810: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a80c) {
            ctx->pc = 0x17A81Cu;
            goto label_17a81c;
        }
    }
    ctx->pc = 0x17A814u;
    // 0x17a814: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17A814u;
    {
        const bool branch_taken_0x17a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A814u;
        // 0x17a818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a814) {
            ctx->pc = 0x17A828u;
            goto label_17a828;
        }
    }
    ctx->pc = 0x17A81Cu;
label_17a81c:
    // 0x17a81c: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x17A81Cu;
    SET_GPR_U32(ctx, 31, 0x17A824u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x17A81Cu, 0x17A824u)) {
        return;
    }
    ctx->pc = 0x17A824u;
label_17a824:
    // 0x17a824: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17a824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17a828:
    // 0x17a828: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x17A828u;
    {
        const bool branch_taken_0x17a828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A828u;
        // 0x17a82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a828) {
            ctx->pc = 0x17A920u;
            goto label_17a920;
        }
    }
    ctx->pc = 0x17A830u;
    // 0x17a830: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x17a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a834: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17a834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17a838: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17a838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x17a83c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17a83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17a840: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17a840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17a844: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17a844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a848: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x17a848u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4120u));
    // 0x17a84c: 0x0  nop
    ctx->pc = 0x17a84cu;
    // NOP
    // 0x17a850: 0x0  nop
    ctx->pc = 0x17a850u;
    // NOP
    // 0x17a854: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x17a854u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x17a858: 0xc07bf08  jal         func_1EFC20
    ctx->pc = 0x17A858u;
    SET_GPR_U32(ctx, 31, 0x17A860u);
    ctx->pc = 0x17A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A858u;
    // 0x17a85c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC20u, 0x17A858u, 0x17A860u)) {
        return;
    }
    ctx->pc = 0x17A860u;
label_17a860:
    // 0x17a860: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A860u;
    {
        const bool branch_taken_0x17a860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a860) {
            ctx->pc = 0x17A8A8u;
            goto label_17a8a8;
        }
    }
    ctx->pc = 0x17A868u;
    // 0x17a868: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x17a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x17a86c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17A86Cu;
    {
        const bool branch_taken_0x17a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A86Cu;
        // 0x17a870: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a86c) {
            ctx->pc = 0x17A8A8u;
            goto label_17a8a8;
        }
    }
    ctx->pc = 0x17A874u;
    // 0x17a874: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x17a874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x17a878: 0x8c42bd10  lw          $v0, -0x42F0($v0)
    ctx->pc = 0x17a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950160)));
    // 0x17a87c: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x17a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x17a880: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x17a880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17a884: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A884u;
    {
        const bool branch_taken_0x17a884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x17A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A884u;
        // 0x17a888: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a884) {
            ctx->pc = 0x17A8A0u;
            goto label_17a8a0;
        }
    }
    ctx->pc = 0x17A88Cu;
    // 0x17a88c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a890: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A890u;
    {
        const bool branch_taken_0x17a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A890u;
        // 0x17a894: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a890) {
            ctx->pc = 0x17A8A4u;
            goto label_17a8a4;
        }
    }
    ctx->pc = 0x17A898u;
    // 0x17a898: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x17A898u;
    SET_GPR_U32(ctx, 31, 0x17A8A0u);
    ctx->pc = 0x17A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A898u;
    // 0x17a89c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17A898u, 0x17A8A0u)) {
        return;
    }
    ctx->pc = 0x17A8A0u;
label_17a8a0:
    // 0x17a8a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17a8a4:
    // 0x17a8a4: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x17a8a4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17a8a8:
    // 0x17a8a8: 0x5240001c  beql        $s2, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x17A8A8u;
    {
        const bool branch_taken_0x17a8a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a8a8) {
            ctx->pc = 0x17A8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A8A8u;
            // 0x17a8ac: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A91Cu;
            goto label_17a91c;
        }
    }
    ctx->pc = 0x17A8B0u;
    // 0x17a8b0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x17a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x17a8b4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x17a8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x17a8b8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17A8B8u;
    {
        const bool branch_taken_0x17a8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8B8u;
        // 0x17a8bc: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a8b8) {
            ctx->pc = 0x17A910u;
            goto label_17a910;
        }
    }
    ctx->pc = 0x17A8C0u;
    // 0x17a8c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17a8c4: 0x24426ee0  addiu       $v0, $v0, 0x6EE0
    ctx->pc = 0x17a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28384));
    // 0x17a8c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a8cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a8d0: 0x800008  jr          $a0
    ctx->pc = 0x17A8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A8D8u: goto label_17a8d8;
            case 0x17A8F8u: goto label_17a8f8;
            case 0x17A908u: goto label_17a908;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A8D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17A8D8u;
label_17a8d8:
    // 0x17a8d8: 0x8e244120  lw          $a0, 0x4120($s1)
    ctx->pc = 0x17a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16672)));
    // 0x17a8dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17a8dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17a8e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17a8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a8e8: 0xc07bf5e  jal         func_1EFD78
    ctx->pc = 0x17A8E8u;
    SET_GPR_U32(ctx, 31, 0x17A8F0u);
    ctx->pc = 0x17A8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8E8u;
    // 0x17a8ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFD78u, 0x17A8E8u, 0x17A8F0u)) {
        return;
    }
    ctx->pc = 0x17A8F0u;
label_17a8f0:
    // 0x17a8f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17A8F0u;
    {
        const bool branch_taken_0x17a8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8F0u;
        // 0x17a8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a8f0) {
            ctx->pc = 0x17A914u;
            goto label_17a914;
        }
    }
    ctx->pc = 0x17A8F8u;
label_17a8f8:
    // 0x17a8f8: 0xc07bee4  jal         func_1EFB90
    ctx->pc = 0x17A8F8u;
    SET_GPR_U32(ctx, 31, 0x17A900u);
    ctx->pc = 0x17A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8F8u;
    // 0x17a8fc: 0x8e244120  lw          $a0, 0x4120($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFB90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFB90u, 0x17A8F8u, 0x17A900u)) {
        return;
    }
    ctx->pc = 0x17A900u;
label_17a900:
    // 0x17a900: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17A900u;
    {
        const bool branch_taken_0x17a900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A900u;
        // 0x17a904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a900) {
            ctx->pc = 0x17A914u;
            goto label_17a914;
        }
    }
    ctx->pc = 0x17A908u;
label_17a908:
    // 0x17a908: 0xc07bee4  jal         func_1EFB90
    ctx->pc = 0x17A908u;
    SET_GPR_U32(ctx, 31, 0x17A910u);
    ctx->pc = 0x17A90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A908u;
    // 0x17a90c: 0x8e244120  lw          $a0, 0x4120($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFB90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFB90u, 0x17A908u, 0x17A910u)) {
        return;
    }
    ctx->pc = 0x17A910u;
label_17a910:
    // 0x17a910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a914:
    // 0x17a914: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x17a914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x17a918: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x17a918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_17a91c:
    // 0x17a91c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x17a91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17a920:
    // 0x17a920: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17a920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a924: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17a924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a928: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17a928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a92c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17a92cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a934: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x17a934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17a938: 0x3e00008  jr          $ra
    ctx->pc = 0x17A938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A938u;
        // 0x17a93c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A940u;
}
