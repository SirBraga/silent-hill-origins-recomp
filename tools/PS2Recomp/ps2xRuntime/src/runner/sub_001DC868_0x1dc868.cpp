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

// Function: sub_001DC868
// Address: 0x1dc868 - 0x1dc9e8
void sub_001DC868_0x1dc868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC868_0x1dc868");
#endif

    switch (ctx->pc) {
        case 0x1dc868u: goto label_1dc868;
        case 0x1dc86cu: goto label_1dc86c;
        case 0x1dc870u: goto label_1dc870;
        case 0x1dc874u: goto label_1dc874;
        case 0x1dc878u: goto label_1dc878;
        case 0x1dc87cu: goto label_1dc87c;
        case 0x1dc880u: goto label_1dc880;
        case 0x1dc884u: goto label_1dc884;
        case 0x1dc888u: goto label_1dc888;
        case 0x1dc88cu: goto label_1dc88c;
        case 0x1dc890u: goto label_1dc890;
        case 0x1dc894u: goto label_1dc894;
        case 0x1dc898u: goto label_1dc898;
        case 0x1dc89cu: goto label_1dc89c;
        case 0x1dc8a0u: goto label_1dc8a0;
        case 0x1dc8a4u: goto label_1dc8a4;
        case 0x1dc8a8u: goto label_1dc8a8;
        case 0x1dc8acu: goto label_1dc8ac;
        case 0x1dc8b0u: goto label_1dc8b0;
        case 0x1dc8b4u: goto label_1dc8b4;
        case 0x1dc8b8u: goto label_1dc8b8;
        case 0x1dc8bcu: goto label_1dc8bc;
        case 0x1dc8c0u: goto label_1dc8c0;
        case 0x1dc8c4u: goto label_1dc8c4;
        case 0x1dc8c8u: goto label_1dc8c8;
        case 0x1dc8ccu: goto label_1dc8cc;
        case 0x1dc8d0u: goto label_1dc8d0;
        case 0x1dc8d4u: goto label_1dc8d4;
        case 0x1dc8d8u: goto label_1dc8d8;
        case 0x1dc8dcu: goto label_1dc8dc;
        case 0x1dc8e0u: goto label_1dc8e0;
        case 0x1dc8e4u: goto label_1dc8e4;
        case 0x1dc8e8u: goto label_1dc8e8;
        case 0x1dc8ecu: goto label_1dc8ec;
        case 0x1dc8f0u: goto label_1dc8f0;
        case 0x1dc8f4u: goto label_1dc8f4;
        case 0x1dc8f8u: goto label_1dc8f8;
        case 0x1dc8fcu: goto label_1dc8fc;
        case 0x1dc900u: goto label_1dc900;
        case 0x1dc904u: goto label_1dc904;
        case 0x1dc908u: goto label_1dc908;
        case 0x1dc90cu: goto label_1dc90c;
        case 0x1dc910u: goto label_1dc910;
        case 0x1dc914u: goto label_1dc914;
        case 0x1dc918u: goto label_1dc918;
        case 0x1dc91cu: goto label_1dc91c;
        case 0x1dc920u: goto label_1dc920;
        case 0x1dc924u: goto label_1dc924;
        case 0x1dc928u: goto label_1dc928;
        case 0x1dc92cu: goto label_1dc92c;
        case 0x1dc930u: goto label_1dc930;
        case 0x1dc934u: goto label_1dc934;
        case 0x1dc938u: goto label_1dc938;
        case 0x1dc93cu: goto label_1dc93c;
        case 0x1dc940u: goto label_1dc940;
        case 0x1dc944u: goto label_1dc944;
        case 0x1dc948u: goto label_1dc948;
        case 0x1dc94cu: goto label_1dc94c;
        case 0x1dc950u: goto label_1dc950;
        case 0x1dc954u: goto label_1dc954;
        case 0x1dc958u: goto label_1dc958;
        case 0x1dc95cu: goto label_1dc95c;
        case 0x1dc960u: goto label_1dc960;
        case 0x1dc964u: goto label_1dc964;
        case 0x1dc968u: goto label_1dc968;
        case 0x1dc96cu: goto label_1dc96c;
        case 0x1dc970u: goto label_1dc970;
        case 0x1dc974u: goto label_1dc974;
        case 0x1dc978u: goto label_1dc978;
        case 0x1dc97cu: goto label_1dc97c;
        case 0x1dc980u: goto label_1dc980;
        case 0x1dc984u: goto label_1dc984;
        case 0x1dc988u: goto label_1dc988;
        case 0x1dc98cu: goto label_1dc98c;
        case 0x1dc990u: goto label_1dc990;
        case 0x1dc994u: goto label_1dc994;
        case 0x1dc998u: goto label_1dc998;
        case 0x1dc99cu: goto label_1dc99c;
        case 0x1dc9a0u: goto label_1dc9a0;
        case 0x1dc9a4u: goto label_1dc9a4;
        case 0x1dc9a8u: goto label_1dc9a8;
        case 0x1dc9acu: goto label_1dc9ac;
        case 0x1dc9b0u: goto label_1dc9b0;
        case 0x1dc9b4u: goto label_1dc9b4;
        case 0x1dc9b8u: goto label_1dc9b8;
        case 0x1dc9bcu: goto label_1dc9bc;
        case 0x1dc9c0u: goto label_1dc9c0;
        case 0x1dc9c4u: goto label_1dc9c4;
        case 0x1dc9c8u: goto label_1dc9c8;
        case 0x1dc9ccu: goto label_1dc9cc;
        case 0x1dc9d0u: goto label_1dc9d0;
        case 0x1dc9d4u: goto label_1dc9d4;
        case 0x1dc9d8u: goto label_1dc9d8;
        case 0x1dc9dcu: goto label_1dc9dc;
        case 0x1dc9e0u: goto label_1dc9e0;
        case 0x1dc9e4u: goto label_1dc9e4;
        default: break;
    }

    ctx->pc = 0x1dc868u;

label_1dc868:
    // 0x1dc868: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dc868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1dc86c:
    // 0x1dc86c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1dc86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1dc870:
    // 0x1dc870: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dc870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dc874:
    // 0x1dc874: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc878:
    // 0x1dc878: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1dc878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1dc87c:
    // 0x1dc87c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dc87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1dc880:
    // 0x1dc880: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dc880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc884:
    // 0x1dc884: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1dc884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1dc888:
    // 0x1dc888: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1dc888u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1dc88c:
    // 0x1dc88c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dc890:
    // 0x1dc890: 0xc08c530  jal         func_2314C0
label_1dc894:
    if (ctx->pc == 0x1DC894u) {
        ctx->pc = 0x1DC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC890u;
        // 0x1dc894: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC898u;
        goto label_1dc898;
    }
    ctx->pc = 0x1DC890u;
    SET_GPR_U32(ctx, 31, 0x1DC898u);
    ctx->pc = 0x1DC894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC890u;
    // 0x1dc894: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2314C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2314C0u, 0x1DC890u, 0x1DC898u)) {
        return;
    }
    ctx->pc = 0x1DC898u;
label_1dc898:
    // 0x1dc898: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1dc898u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
label_1dc89c:
    // 0x1dc89c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1dc89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1dc8a0:
    // 0x1dc8a0: 0xc08c530  jal         func_2314C0
label_1dc8a4:
    if (ctx->pc == 0x1DC8A4u) {
        ctx->pc = 0x1DC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8A0u;
        // 0x1dc8a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8A8u;
        goto label_1dc8a8;
    }
    ctx->pc = 0x1DC8A0u;
    SET_GPR_U32(ctx, 31, 0x1DC8A8u);
    ctx->pc = 0x1DC8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC8A0u;
    // 0x1dc8a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2314C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2314C0u, 0x1DC8A0u, 0x1DC8A8u)) {
        return;
    }
    ctx->pc = 0x1DC8A8u;
label_1dc8a8:
    // 0x1dc8a8: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x1dc8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
label_1dc8ac:
    // 0x1dc8ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dc8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc8b0:
    // 0x1dc8b0: 0xc08c4aa  jal         func_2312A8
label_1dc8b4:
    if (ctx->pc == 0x1DC8B4u) {
        ctx->pc = 0x1DC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8B0u;
        // 0x1dc8b4: 0x34a5006a  ori         $a1, $a1, 0x6A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)106);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8B8u;
        goto label_1dc8b8;
    }
    ctx->pc = 0x1DC8B0u;
    SET_GPR_U32(ctx, 31, 0x1DC8B8u);
    ctx->pc = 0x1DC8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC8B0u;
    // 0x1dc8b4: 0x34a5006a  ori         $a1, $a1, 0x6A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)106);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DC8B0u, 0x1DC8B8u)) {
        return;
    }
    ctx->pc = 0x1DC8B8u;
label_1dc8b8:
    // 0x1dc8b8: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1dc8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1dc8bc:
    // 0x1dc8bc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1dc8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dc8c0:
    // 0x1dc8c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc8c4:
    // 0x1dc8c4: 0x40f809  jalr        $v0
label_1dc8c8:
    if (ctx->pc == 0x1DC8C8u) {
        ctx->pc = 0x1DC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8C4u;
        // 0x1dc8c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8CCu;
        goto label_1dc8cc;
    }
    ctx->pc = 0x1DC8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC8CCu);
        ctx->pc = 0x1DC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8C4u;
        // 0x1dc8c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC8C4u, 0x1DC8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC8CCu;
label_1dc8cc:
    // 0x1dc8cc: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_1dc8d0:
    if (ctx->pc == 0x1DC8D0u) {
        ctx->pc = 0x1DC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8CCu;
        // 0x1dc8d0: 0x8e43e664  lw          $v1, -0x199C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8D4u;
        goto label_1dc8d4;
    }
    ctx->pc = 0x1DC8CCu;
    {
        const bool branch_taken_0x1dc8cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8CCu;
        // 0x1dc8d0: 0x8e43e664  lw          $v1, -0x199C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8cc) {
            ctx->pc = 0x1DC90Cu;
            goto label_1dc90c;
        }
    }
    ctx->pc = 0x1DC8D4u;
label_1dc8d4:
    // 0x1dc8d4: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x1dc8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dc8d8:
    // 0x1dc8d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1dc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1dc8dc:
    // 0x1dc8dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dc8e0:
    if (ctx->pc == 0x1DC8E0u) {
        ctx->pc = 0x1DC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8DCu;
        // 0x1dc8e0: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8E4u;
        goto label_1dc8e4;
    }
    ctx->pc = 0x1DC8DCu;
    {
        const bool branch_taken_0x1dc8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8DCu;
        // 0x1dc8e0: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8dc) {
            ctx->pc = 0x1DC8F8u;
            goto label_1dc8f8;
        }
    }
    ctx->pc = 0x1DC8E4u;
label_1dc8e4:
    // 0x1dc8e4: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dc8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dc8e8:
    // 0x1dc8e8: 0x40f809  jalr        $v0
label_1dc8ec:
    if (ctx->pc == 0x1DC8ECu) {
        ctx->pc = 0x1DC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8E8u;
        // 0x1dc8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8F0u;
        goto label_1dc8f0;
    }
    ctx->pc = 0x1DC8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC8F0u);
        ctx->pc = 0x1DC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8E8u;
        // 0x1dc8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC8E8u, 0x1DC8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC8F0u;
label_1dc8f0:
    // 0x1dc8f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dc8f4:
    if (ctx->pc == 0x1DC8F4u) {
        ctx->pc = 0x1DC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8F0u;
        // 0x1dc8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8F8u;
        goto label_1dc8f8;
    }
    ctx->pc = 0x1DC8F0u;
    {
        const bool branch_taken_0x1dc8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8F0u;
        // 0x1dc8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8f0) {
            ctx->pc = 0x1DC908u;
            goto label_1dc908;
        }
    }
    ctx->pc = 0x1DC8F8u;
label_1dc8f8:
    // 0x1dc8f8: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dc8fc:
    // 0x1dc8fc: 0x40f809  jalr        $v0
label_1dc900:
    if (ctx->pc == 0x1DC900u) {
        ctx->pc = 0x1DC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8FCu;
        // 0x1dc900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC904u;
        goto label_1dc904;
    }
    ctx->pc = 0x1DC8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC904u);
        ctx->pc = 0x1DC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8FCu;
        // 0x1dc900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC8FCu, 0x1DC904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC904u;
label_1dc904:
    // 0x1dc904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc908:
    // 0x1dc908: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dc908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1dc90c:
    // 0x1dc90c: 0x26630fd8  addiu       $v1, $s3, 0xFD8
    ctx->pc = 0x1dc90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
label_1dc910:
    // 0x1dc910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dc910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc914:
    // 0x1dc914: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1dc914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1dc918:
    // 0x1dc918: 0x40f809  jalr        $v0
label_1dc91c:
    if (ctx->pc == 0x1DC91Cu) {
        ctx->pc = 0x1DC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC918u;
        // 0x1dc91c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC920u;
        goto label_1dc920;
    }
    ctx->pc = 0x1DC918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC920u);
        ctx->pc = 0x1DC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC918u;
        // 0x1dc91c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC918u, 0x1DC920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC920u;
label_1dc920:
    // 0x1dc920: 0x8e43e664  lw          $v1, -0x199C($s2)
    ctx->pc = 0x1dc920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
label_1dc924:
    // 0x1dc924: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1dc924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_1dc928:
    // 0x1dc928: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dc928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc92c:
    // 0x1dc92c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1dc92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dc930:
    // 0x1dc930: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1dc930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dc934:
    // 0x1dc934: 0x52dc0  sll         $a1, $a1, 23
    ctx->pc = 0x1dc934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 23));
label_1dc938:
    // 0x1dc938: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1dc938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1dc93c:
    // 0x1dc93c: 0xc08c4aa  jal         func_2312A8
label_1dc940:
    if (ctx->pc == 0x1DC940u) {
        ctx->pc = 0x1DC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC93Cu;
        // 0x1dc940: 0x34a50064  ori         $a1, $a1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)100);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC944u;
        goto label_1dc944;
    }
    ctx->pc = 0x1DC93Cu;
    SET_GPR_U32(ctx, 31, 0x1DC944u);
    ctx->pc = 0x1DC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC93Cu;
    // 0x1dc940: 0x34a50064  ori         $a1, $a1, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DC93Cu, 0x1DC944u)) {
        return;
    }
    ctx->pc = 0x1DC944u;
label_1dc944:
    // 0x1dc944: 0x8e43e664  lw          $v1, -0x199C($s2)
    ctx->pc = 0x1dc944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
label_1dc948:
    // 0x1dc948: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1dc948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc94c:
    // 0x1dc94c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1dc94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dc950:
    // 0x1dc950: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1dc950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1dc954:
    // 0x1dc954: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_1dc958:
    if (ctx->pc == 0x1DC958u) {
        ctx->pc = 0x1DC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC954u;
        // 0x1dc958: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC95Cu;
        goto label_1dc95c;
    }
    ctx->pc = 0x1DC954u;
    {
        const bool branch_taken_0x1dc954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1DC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC954u;
        // 0x1dc958: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc954) {
            ctx->pc = 0x1DC96Cu;
            goto label_1dc96c;
        }
    }
    ctx->pc = 0x1DC95Cu;
label_1dc95c:
    // 0x1dc95c: 0xc08c4aa  jal         func_2312A8
label_1dc960:
    if (ctx->pc == 0x1DC960u) {
        ctx->pc = 0x1DC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC95Cu;
        // 0x1dc960: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC964u;
        goto label_1dc964;
    }
    ctx->pc = 0x1DC95Cu;
    SET_GPR_U32(ctx, 31, 0x1DC964u);
    ctx->pc = 0x1DC960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC95Cu;
    // 0x1dc960: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DC95Cu, 0x1DC964u)) {
        return;
    }
    ctx->pc = 0x1DC964u;
label_1dc964:
    // 0x1dc964: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dc968:
    if (ctx->pc == 0x1DC968u) {
        ctx->pc = 0x1DC96Cu;
        goto label_1dc96c;
    }
    ctx->pc = 0x1DC964u;
    {
        const bool branch_taken_0x1dc964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc964) {
            ctx->pc = 0x1DC974u;
            goto label_1dc974;
        }
    }
    ctx->pc = 0x1DC96Cu;
label_1dc96c:
    // 0x1dc96c: 0xc08c4aa  jal         func_2312A8
label_1dc970:
    if (ctx->pc == 0x1DC970u) {
        ctx->pc = 0x1DC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC96Cu;
        // 0x1dc970: 0x2405080b  addiu       $a1, $zero, 0x80B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC974u;
        goto label_1dc974;
    }
    ctx->pc = 0x1DC96Cu;
    SET_GPR_U32(ctx, 31, 0x1DC974u);
    ctx->pc = 0x1DC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC96Cu;
    // 0x1dc970: 0x2405080b  addiu       $a1, $zero, 0x80B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DC96Cu, 0x1DC974u)) {
        return;
    }
    ctx->pc = 0x1DC974u;
label_1dc974:
    // 0x1dc974: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_1dc978:
    if (ctx->pc == 0x1DC978u) {
        ctx->pc = 0x1DC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC974u;
        // 0x1dc978: 0x8e42e664  lw          $v0, -0x199C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC97Cu;
        goto label_1dc97c;
    }
    ctx->pc = 0x1DC974u;
    {
        const bool branch_taken_0x1dc974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC974u;
        // 0x1dc978: 0x8e42e664  lw          $v0, -0x199C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc974) {
            ctx->pc = 0x1DC9B4u;
            goto label_1dc9b4;
        }
    }
    ctx->pc = 0x1DC97Cu;
label_1dc97c:
    // 0x1dc97c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1dc97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1dc980:
    // 0x1dc980: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1dc980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1dc984:
    // 0x1dc984: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1dc988:
    if (ctx->pc == 0x1DC988u) {
        ctx->pc = 0x1DC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC984u;
        // 0x1dc988: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC98Cu;
        goto label_1dc98c;
    }
    ctx->pc = 0x1DC984u;
    {
        const bool branch_taken_0x1dc984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC984u;
        // 0x1dc988: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc984) {
            ctx->pc = 0x1DC9A0u;
            goto label_1dc9a0;
        }
    }
    ctx->pc = 0x1DC98Cu;
label_1dc98c:
    // 0x1dc98c: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dc98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dc990:
    // 0x1dc990: 0x40f809  jalr        $v0
label_1dc994:
    if (ctx->pc == 0x1DC994u) {
        ctx->pc = 0x1DC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC990u;
        // 0x1dc994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC998u;
        goto label_1dc998;
    }
    ctx->pc = 0x1DC990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC998u);
        ctx->pc = 0x1DC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC990u;
        // 0x1dc994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC990u, 0x1DC998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC998u;
label_1dc998:
    // 0x1dc998: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dc99c:
    if (ctx->pc == 0x1DC99Cu) {
        ctx->pc = 0x1DC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC998u;
        // 0x1dc99c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9A0u;
        goto label_1dc9a0;
    }
    ctx->pc = 0x1DC998u;
    {
        const bool branch_taken_0x1dc998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC998u;
        // 0x1dc99c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc998) {
            ctx->pc = 0x1DC9B0u;
            goto label_1dc9b0;
        }
    }
    ctx->pc = 0x1DC9A0u;
label_1dc9a0:
    // 0x1dc9a0: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dc9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dc9a4:
    // 0x1dc9a4: 0x40f809  jalr        $v0
label_1dc9a8:
    if (ctx->pc == 0x1DC9A8u) {
        ctx->pc = 0x1DC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9A4u;
        // 0x1dc9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9ACu;
        goto label_1dc9ac;
    }
    ctx->pc = 0x1DC9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC9ACu);
        ctx->pc = 0x1DC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9A4u;
        // 0x1dc9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC9A4u, 0x1DC9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC9ACu;
label_1dc9ac:
    // 0x1dc9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc9b0:
    // 0x1dc9b0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dc9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1dc9b4:
    // 0x1dc9b4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1dc9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc9b8:
    // 0x1dc9b8: 0xc08c4aa  jal         func_2312A8
label_1dc9bc:
    if (ctx->pc == 0x1DC9BCu) {
        ctx->pc = 0x1DC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9B8u;
        // 0x1dc9bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9C0u;
        goto label_1dc9c0;
    }
    ctx->pc = 0x1DC9B8u;
    SET_GPR_U32(ctx, 31, 0x1DC9C0u);
    ctx->pc = 0x1DC9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9B8u;
    // 0x1dc9bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DC9B8u, 0x1DC9C0u)) {
        return;
    }
    ctx->pc = 0x1DC9C0u;
label_1dc9c0:
    // 0x1dc9c0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1dc9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1dc9c4:
    // 0x1dc9c4: 0xc08c4aa  jal         func_2312A8
label_1dc9c8:
    if (ctx->pc == 0x1DC9C8u) {
        ctx->pc = 0x1DC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9C4u;
        // 0x1dc9c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9CCu;
        goto label_1dc9cc;
    }
    ctx->pc = 0x1DC9C4u;
    SET_GPR_U32(ctx, 31, 0x1DC9CCu);
    ctx->pc = 0x1DC9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9C4u;
    // 0x1dc9c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DC9C4u, 0x1DC9CCu)) {
        return;
    }
    ctx->pc = 0x1DC9CCu;
label_1dc9cc:
    // 0x1dc9cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1dc9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dc9d0:
    // 0x1dc9d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1dc9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dc9d4:
    // 0x1dc9d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dc9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc9d8:
    // 0x1dc9d8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1dc9d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc9dc:
    // 0x1dc9dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc9e0:
    // 0x1dc9e0: 0x3e00008  jr          $ra
label_1dc9e4:
    if (ctx->pc == 0x1DC9E4u) {
        ctx->pc = 0x1DC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9E0u;
        // 0x1dc9e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9E8u;
        goto label_fallthrough_0x1dc9e0;
    }
    ctx->pc = 0x1DC9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9E0u;
        // 0x1dc9e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dc9e0:
    ctx->pc = 0x1DC9E8u;
}
