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

// Function: sub_0016B7F0
// Address: 0x16b7f0 - 0x16b900
void sub_0016B7F0_0x16b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B7F0_0x16b7f0");
#endif

    switch (ctx->pc) {
        case 0x16b854u: goto label_16b854;
        case 0x16b86cu: goto label_16b86c;
        case 0x16b87cu: goto label_16b87c;
        case 0x16b890u: goto label_16b890;
        case 0x16b898u: goto label_16b898;
        case 0x16b8b4u: goto label_16b8b4;
        case 0x16b8c8u: goto label_16b8c8;
        case 0x16b8ecu: goto label_16b8ec;
        default: break;
    }

    ctx->pc = 0x16b7f0u;

    // 0x16b7f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b7f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b7f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16b7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16b7fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b800: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b804: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x16b804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x16b808: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B808u;
    {
        const bool branch_taken_0x16b808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b808) {
            ctx->pc = 0x16B80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B808u;
            // 0x16b80c: 0x8e220070  lw          $v0, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B820u;
            goto label_16b820;
        }
    }
    ctx->pc = 0x16B810u;
    // 0x16b810: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x16b814: 0x8c439168  lw          $v1, -0x6E98($v0)
    ctx->pc = 0x16b814u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339168u));
    // 0x16b818: 0xac600248  sw          $zero, 0x248($v1)
    ctx->pc = 0x16b818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 584), GPR_U32(ctx, 0));
    // 0x16b81c: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x16b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16b820:
    // 0x16b820: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x16B820u;
    {
        const bool branch_taken_0x16b820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B820u;
        // 0x16b824: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b820) {
            ctx->pc = 0x16B8ECu;
            goto label_16b8ec;
        }
    }
    ctx->pc = 0x16B828u;
    // 0x16b828: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x16b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x16b82c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x16b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x16b830: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B830u;
    {
        const bool branch_taken_0x16b830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B830u;
        // 0x16b834: 0x26300038  addiu       $s0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b830) {
            ctx->pc = 0x16B858u;
            goto label_16b858;
        }
    }
    ctx->pc = 0x16B838u;
    // 0x16b838: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b83c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B83Cu;
    {
        const bool branch_taken_0x16b83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b83c) {
            ctx->pc = 0x16B840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B83Cu;
            // 0x16b840: 0xae200070  sw          $zero, 0x70($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B85Cu;
            goto label_16b85c;
        }
    }
    ctx->pc = 0x16B844u;
    // 0x16b844: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16b844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16b848: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16b848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b84c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16B84Cu;
    SET_GPR_U32(ctx, 31, 0x16B854u);
    ctx->pc = 0x16B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B84Cu;
    // 0x16b850: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16B84Cu, 0x16B854u)) {
        return;
    }
    ctx->pc = 0x16B854u;
label_16b854:
    // 0x16b854: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x16b854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_16b858:
    // 0x16b858: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x16b858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_16b85c:
    // 0x16b85c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16b860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b864: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16B864u;
    SET_GPR_U32(ctx, 31, 0x16B86Cu);
    ctx->pc = 0x16B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B864u;
    // 0x16b868: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16B864u, 0x16B86Cu)) {
        return;
    }
    ctx->pc = 0x16B86Cu;
label_16b86c:
    // 0x16b86c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16b870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b874: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16B874u;
    SET_GPR_U32(ctx, 31, 0x16B87Cu);
    ctx->pc = 0x16B878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B874u;
    // 0x16b878: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16B874u, 0x16B87Cu)) {
        return;
    }
    ctx->pc = 0x16B87Cu;
label_16b87c:
    // 0x16b87c: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x16b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x16b880: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B880u;
    {
        const bool branch_taken_0x16b880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B880u;
        // 0x16b884: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b880) {
            ctx->pc = 0x16B8A0u;
            goto label_16b8a0;
        }
    }
    ctx->pc = 0x16B888u;
    // 0x16b888: 0xc07bf02  jal         func_1EFC08
    ctx->pc = 0x16B888u;
    SET_GPR_U32(ctx, 31, 0x16B890u);
    ctx->pc = 0x16B88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B888u;
    // 0x16b88c: 0x8c444120  lw          $a0, 0x4120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC08u, 0x16B888u, 0x16B890u)) {
        return;
    }
    ctx->pc = 0x16B890u;
label_16b890:
    // 0x16b890: 0xc05af24  jal         func_16BC90
    ctx->pc = 0x16B890u;
    SET_GPR_U32(ctx, 31, 0x16B898u);
    ctx->pc = 0x16B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B890u;
    // 0x16b894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16BC90u, 0x16B890u, 0x16B898u)) {
        return;
    }
    ctx->pc = 0x16B898u;
label_16b898:
    // 0x16b898: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16B898u;
    {
        const bool branch_taken_0x16b898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B898u;
        // 0x16b89c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b898) {
            ctx->pc = 0x16B8F0u;
            goto label_16b8f0;
        }
    }
    ctx->pc = 0x16B8A0u;
label_16b8a0:
    // 0x16b8a0: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x16b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x16b8a4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16B8A4u;
    {
        const bool branch_taken_0x16b8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8A4u;
        // 0x16b8a8: 0x3c10006b  lui         $s0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8a4) {
            ctx->pc = 0x16B8ECu;
            goto label_16b8ec;
        }
    }
    ctx->pc = 0x16B8ACu;
    // 0x16b8ac: 0xc07bf02  jal         func_1EFC08
    ctx->pc = 0x16B8ACu;
    SET_GPR_U32(ctx, 31, 0x16B8B4u);
    ctx->pc = 0x16B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8ACu;
    // 0x16b8b0: 0x8e044120  lw          $a0, 0x4120($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC08u, 0x16B8ACu, 0x16B8B4u)) {
        return;
    }
    ctx->pc = 0x16B8B4u;
label_16b8b4:
    // 0x16b8b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b8b8: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x16b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x16b8bc: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x16b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x16b8c0: 0xc07bf02  jal         func_1EFC08
    ctx->pc = 0x16B8C0u;
    SET_GPR_U32(ctx, 31, 0x16B8C8u);
    ctx->pc = 0x16B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8C0u;
    // 0x16b8c4: 0x8e044120  lw          $a0, 0x4120($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC08u, 0x16B8C0u, 0x16B8C8u)) {
        return;
    }
    ctx->pc = 0x16B8C8u;
label_16b8c8:
    // 0x16b8c8: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x16b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b8cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b8d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16b8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16b8d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16b8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b8d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16b8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b8dc: 0x8e044120  lw          $a0, 0x4120($s0)
    ctx->pc = 0x16b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16672)));
    // 0x16b8e0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x16b8e0u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x16b8e4: 0xc07bf5e  jal         func_1EFD78
    ctx->pc = 0x16B8E4u;
    SET_GPR_U32(ctx, 31, 0x16B8ECu);
    ctx->pc = 0x16B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8E4u;
    // 0x16b8e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFD78u, 0x16B8E4u, 0x16B8ECu)) {
        return;
    }
    ctx->pc = 0x16B8ECu;
label_16b8ec:
    // 0x16b8ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16b8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16b8f0:
    // 0x16b8f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8F8u;
        // 0x16b8fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B900u;
}
