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

// Function: sub_00207968
// Address: 0x207968 - 0x207a88
void sub_00207968_0x207968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207968_0x207968");
#endif

    switch (ctx->pc) {
        case 0x207968u: goto label_207968;
        case 0x20796cu: goto label_20796c;
        case 0x207970u: goto label_207970;
        case 0x207974u: goto label_207974;
        case 0x207978u: goto label_207978;
        case 0x20797cu: goto label_20797c;
        case 0x207980u: goto label_207980;
        case 0x207984u: goto label_207984;
        case 0x207988u: goto label_207988;
        case 0x20798cu: goto label_20798c;
        case 0x207990u: goto label_207990;
        case 0x207994u: goto label_207994;
        case 0x207998u: goto label_207998;
        case 0x20799cu: goto label_20799c;
        case 0x2079a0u: goto label_2079a0;
        case 0x2079a4u: goto label_2079a4;
        case 0x2079a8u: goto label_2079a8;
        case 0x2079acu: goto label_2079ac;
        case 0x2079b0u: goto label_2079b0;
        case 0x2079b4u: goto label_2079b4;
        case 0x2079b8u: goto label_2079b8;
        case 0x2079bcu: goto label_2079bc;
        case 0x2079c0u: goto label_2079c0;
        case 0x2079c4u: goto label_2079c4;
        case 0x2079c8u: goto label_2079c8;
        case 0x2079ccu: goto label_2079cc;
        case 0x2079d0u: goto label_2079d0;
        case 0x2079d4u: goto label_2079d4;
        case 0x2079d8u: goto label_2079d8;
        case 0x2079dcu: goto label_2079dc;
        case 0x2079e0u: goto label_2079e0;
        case 0x2079e4u: goto label_2079e4;
        case 0x2079e8u: goto label_2079e8;
        case 0x2079ecu: goto label_2079ec;
        case 0x2079f0u: goto label_2079f0;
        case 0x2079f4u: goto label_2079f4;
        case 0x2079f8u: goto label_2079f8;
        case 0x2079fcu: goto label_2079fc;
        case 0x207a00u: goto label_207a00;
        case 0x207a04u: goto label_207a04;
        case 0x207a08u: goto label_207a08;
        case 0x207a0cu: goto label_207a0c;
        case 0x207a10u: goto label_207a10;
        case 0x207a14u: goto label_207a14;
        case 0x207a18u: goto label_207a18;
        case 0x207a1cu: goto label_207a1c;
        case 0x207a20u: goto label_207a20;
        case 0x207a24u: goto label_207a24;
        case 0x207a28u: goto label_207a28;
        case 0x207a2cu: goto label_207a2c;
        case 0x207a30u: goto label_207a30;
        case 0x207a34u: goto label_207a34;
        case 0x207a38u: goto label_207a38;
        case 0x207a3cu: goto label_207a3c;
        case 0x207a40u: goto label_207a40;
        case 0x207a44u: goto label_207a44;
        case 0x207a48u: goto label_207a48;
        case 0x207a4cu: goto label_207a4c;
        case 0x207a50u: goto label_207a50;
        case 0x207a54u: goto label_207a54;
        case 0x207a58u: goto label_207a58;
        case 0x207a5cu: goto label_207a5c;
        case 0x207a60u: goto label_207a60;
        case 0x207a64u: goto label_207a64;
        case 0x207a68u: goto label_207a68;
        case 0x207a6cu: goto label_207a6c;
        case 0x207a70u: goto label_207a70;
        case 0x207a74u: goto label_207a74;
        case 0x207a78u: goto label_207a78;
        case 0x207a7cu: goto label_207a7c;
        case 0x207a80u: goto label_207a80;
        case 0x207a84u: goto label_207a84;
        default: break;
    }

    ctx->pc = 0x207968u;

label_207968:
    // 0x207968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20796c:
    // 0x20796c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_207970:
    // 0x207970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207974:
    // 0x207974: 0x241000cc  addiu       $s0, $zero, 0xCC
    ctx->pc = 0x207974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_207978:
    // 0x207978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20797c:
    // 0x20797c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20797cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207980:
    // 0x207980: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x207980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_207984:
    // 0x207984: 0x50500032  beql        $v0, $s0, . + 4 + (0x32 << 2)
label_207988:
    if (ctx->pc == 0x207988u) {
        ctx->pc = 0x207988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207984u;
        // 0x207988: 0x8e2201a4  lw          $v0, 0x1A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20798Cu;
        goto label_20798c;
    }
    ctx->pc = 0x207984u;
    {
        const bool branch_taken_0x207984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x207984) {
            ctx->pc = 0x207988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207984u;
            // 0x207988: 0x8e2201a4  lw          $v0, 0x1A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207A50u;
            goto label_207a50;
        }
    }
    ctx->pc = 0x20798Cu;
label_20798c:
    // 0x20798c: 0x8e2301a4  lw          $v1, 0x1A4($s1)
    ctx->pc = 0x20798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_207990:
    // 0x207990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207994:
    // 0x207994: 0x40f809  jalr        $v0
label_207998:
    if (ctx->pc == 0x207998u) {
        ctx->pc = 0x20799Cu;
        goto label_20799c;
    }
    ctx->pc = 0x207994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20799Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207994u, 0x20799Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20799Cu;
label_20799c:
    // 0x20799c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2079a0:
    if (ctx->pc == 0x2079A0u) {
        ctx->pc = 0x2079A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20799Cu;
        // 0x2079a0: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2079A4u;
        goto label_2079a4;
    }
    ctx->pc = 0x20799Cu;
    {
        const bool branch_taken_0x20799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20799Cu;
        // 0x2079a0: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20799c) {
            ctx->pc = 0x207A48u;
            goto label_207a48;
        }
    }
    ctx->pc = 0x2079A4u;
label_2079a4:
    // 0x2079a4: 0x0  nop
    ctx->pc = 0x2079a4u;
    // NOP
label_2079a8:
    // 0x2079a8: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x2079a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2079ac:
    // 0x2079ac: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2079acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2079b0:
    // 0x2079b0: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_2079b4:
    if (ctx->pc == 0x2079B4u) {
        ctx->pc = 0x2079B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079B0u;
        // 0x2079b4: 0x8e2301a4  lw          $v1, 0x1A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2079B8u;
        goto label_2079b8;
    }
    ctx->pc = 0x2079B0u;
    {
        const bool branch_taken_0x2079b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079b0) {
            ctx->pc = 0x2079B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2079B0u;
            // 0x2079b4: 0x8e2301a4  lw          $v1, 0x1A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207A2Cu;
            goto label_207a2c;
        }
    }
    ctx->pc = 0x2079B8u;
label_2079b8:
    // 0x2079b8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2079b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2079bc:
    // 0x2079bc: 0x0  nop
    ctx->pc = 0x2079bcu;
    // NOP
label_2079c0:
    // 0x2079c0: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_2079c4:
    if (ctx->pc == 0x2079C4u) {
        ctx->pc = 0x2079C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079C0u;
        // 0x2079c4: 0x8e2201a8  lw          $v0, 0x1A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2079C8u;
        goto label_2079c8;
    }
    ctx->pc = 0x2079C0u;
    {
        const bool branch_taken_0x2079c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079c0) {
            ctx->pc = 0x2079C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2079C0u;
            // 0x2079c4: 0x8e2201a8  lw          $v0, 0x1A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2079F0u;
            goto label_2079f0;
        }
    }
    ctx->pc = 0x2079C8u;
label_2079c8:
    // 0x2079c8: 0x9e22008c  lwu         $v0, 0x8C($s1)
    ctx->pc = 0x2079c8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_2079cc:
    // 0x2079cc: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x2079ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
label_2079d0:
    // 0x2079d0: 0x9e220074  lwu         $v0, 0x74($s1)
    ctx->pc = 0x2079d0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2079d4:
    // 0x2079d4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2079d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2079d8:
    // 0x2079d8: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x2079d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
label_2079dc:
    // 0x2079dc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2079dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2079e0:
    // 0x2079e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2079e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2079e4:
    // 0x2079e4: 0x40f809  jalr        $v0
label_2079e8:
    if (ctx->pc == 0x2079E8u) {
        ctx->pc = 0x2079E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079E4u;
        // 0x2079e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2079ECu;
        goto label_2079ec;
    }
    ctx->pc = 0x2079E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2079ECu);
        ctx->pc = 0x2079E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079E4u;
        // 0x2079e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2079E4u, 0x2079ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2079ECu;
label_2079ec:
    // 0x2079ec: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x2079ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_2079f0:
    // 0x2079f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2079f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2079f4:
    // 0x2079f4: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x2079f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_2079f8:
    // 0x2079f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2079f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2079fc:
    // 0x2079fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2079fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_207a00:
    // 0x207a00: 0x2626008c  addiu       $a2, $s1, 0x8C
    ctx->pc = 0x207a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
label_207a04:
    // 0x207a04: 0x60f809  jalr        $v1
label_207a08:
    if (ctx->pc == 0x207A08u) {
        ctx->pc = 0x207A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A04u;
        // 0x207a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A0Cu;
        goto label_207a0c;
    }
    ctx->pc = 0x207A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207A0Cu);
        ctx->pc = 0x207A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A04u;
        // 0x207a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A04u, 0x207A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207A0Cu;
label_207a0c:
    // 0x207a0c: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x207a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_207a10:
    // 0x207a10: 0x10700018  beq         $v1, $s0, . + 4 + (0x18 << 2)
label_207a14:
    if (ctx->pc == 0x207A14u) {
        ctx->pc = 0x207A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A10u;
        // 0x207a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A18u;
        goto label_207a18;
    }
    ctx->pc = 0x207A10u;
    {
        const bool branch_taken_0x207a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x207A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A10u;
        // 0x207a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a10) {
            ctx->pc = 0x207A74u;
            goto label_207a74;
        }
    }
    ctx->pc = 0x207A18u;
label_207a18:
    // 0x207a18: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x207a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_207a1c:
    // 0x207a1c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x207a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_207a20:
    // 0x207a20: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
label_207a24:
    if (ctx->pc == 0x207A24u) {
        ctx->pc = 0x207A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A20u;
        // 0x207a24: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A28u;
        goto label_207a28;
    }
    ctx->pc = 0x207A20u;
    {
        const bool branch_taken_0x207a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207a20) {
            ctx->pc = 0x207A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207A20u;
            // 0x207a24: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2079C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2079c0;
        }
    }
    ctx->pc = 0x207A28u;
label_207a28:
    // 0x207a28: 0x8e2301a4  lw          $v1, 0x1A4($s1)
    ctx->pc = 0x207a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_207a2c:
    // 0x207a2c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x207a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_207a30:
    // 0x207a30: 0x40f809  jalr        $v0
label_207a34:
    if (ctx->pc == 0x207A34u) {
        ctx->pc = 0x207A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A30u;
        // 0x207a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A38u;
        goto label_207a38;
    }
    ctx->pc = 0x207A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207A38u);
        ctx->pc = 0x207A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A30u;
        // 0x207a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A30u, 0x207A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207A38u;
label_207a38:
    // 0x207a38: 0x8e2301a4  lw          $v1, 0x1A4($s1)
    ctx->pc = 0x207a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_207a3c:
    // 0x207a3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207a40:
    // 0x207a40: 0x40f809  jalr        $v0
label_207a44:
    if (ctx->pc == 0x207A44u) {
        ctx->pc = 0x207A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A40u;
        // 0x207a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A48u;
        goto label_207a48;
    }
    ctx->pc = 0x207A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207A48u);
        ctx->pc = 0x207A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A40u;
        // 0x207a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A40u, 0x207A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207A48u;
label_207a48:
    // 0x207a48: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x207a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
label_207a4c:
    // 0x207a4c: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x207a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_207a50:
    // 0x207a50: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x207a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_207a54:
    // 0x207a54: 0x5460ffd4  bnel        $v1, $zero, . + 4 + (-0x2C << 2)
label_207a58:
    if (ctx->pc == 0x207A58u) {
        ctx->pc = 0x207A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A54u;
        // 0x207a58: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A5Cu;
        goto label_207a5c;
    }
    ctx->pc = 0x207A54u;
    {
        const bool branch_taken_0x207a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x207a54) {
            ctx->pc = 0x207A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207A54u;
            // 0x207a58: 0x8e22008c  lw          $v0, 0x8C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2079A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2079a8;
        }
    }
    ctx->pc = 0x207A5Cu;
label_207a5c:
    // 0x207a5c: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x207a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_207a60:
    // 0x207a60: 0x240400cd  addiu       $a0, $zero, 0xCD
    ctx->pc = 0x207a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_207a64:
    // 0x207a64: 0x240500ce  addiu       $a1, $zero, 0xCE
    ctx->pc = 0x207a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
label_207a68:
    // 0x207a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207a6c:
    // 0x207a6c: 0xa3200b  movn        $a0, $a1, $v1
    ctx->pc = 0x207a6cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
label_207a70:
    // 0x207a70: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x207a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_207a74:
    // 0x207a74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x207a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207a78:
    // 0x207a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x207a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207a7c:
    // 0x207a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207a80:
    // 0x207a80: 0x3e00008  jr          $ra
label_207a84:
    if (ctx->pc == 0x207A84u) {
        ctx->pc = 0x207A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A80u;
        // 0x207a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A88u;
        goto label_fallthrough_0x207a80;
    }
    ctx->pc = 0x207A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A80u;
        // 0x207a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x207a80:
    ctx->pc = 0x207A88u;
}
