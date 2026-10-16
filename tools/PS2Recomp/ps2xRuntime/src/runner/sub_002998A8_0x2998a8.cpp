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

// Function: sub_002998A8
// Address: 0x2998a8 - 0x299960
void sub_002998A8_0x2998a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002998A8_0x2998a8");
#endif

    switch (ctx->pc) {
        case 0x2998a8u: goto label_2998a8;
        case 0x2998acu: goto label_2998ac;
        case 0x2998b0u: goto label_2998b0;
        case 0x2998b4u: goto label_2998b4;
        case 0x2998b8u: goto label_2998b8;
        case 0x2998bcu: goto label_2998bc;
        case 0x2998c0u: goto label_2998c0;
        case 0x2998c4u: goto label_2998c4;
        case 0x2998c8u: goto label_2998c8;
        case 0x2998ccu: goto label_2998cc;
        case 0x2998d0u: goto label_2998d0;
        case 0x2998d4u: goto label_2998d4;
        case 0x2998d8u: goto label_2998d8;
        case 0x2998dcu: goto label_2998dc;
        case 0x2998e0u: goto label_2998e0;
        case 0x2998e4u: goto label_2998e4;
        case 0x2998e8u: goto label_2998e8;
        case 0x2998ecu: goto label_2998ec;
        case 0x2998f0u: goto label_2998f0;
        case 0x2998f4u: goto label_2998f4;
        case 0x2998f8u: goto label_2998f8;
        case 0x2998fcu: goto label_2998fc;
        case 0x299900u: goto label_299900;
        case 0x299904u: goto label_299904;
        case 0x299908u: goto label_299908;
        case 0x29990cu: goto label_29990c;
        case 0x299910u: goto label_299910;
        case 0x299914u: goto label_299914;
        case 0x299918u: goto label_299918;
        case 0x29991cu: goto label_29991c;
        case 0x299920u: goto label_299920;
        case 0x299924u: goto label_299924;
        case 0x299928u: goto label_299928;
        case 0x29992cu: goto label_29992c;
        case 0x299930u: goto label_299930;
        case 0x299934u: goto label_299934;
        case 0x299938u: goto label_299938;
        case 0x29993cu: goto label_29993c;
        case 0x299940u: goto label_299940;
        case 0x299944u: goto label_299944;
        case 0x299948u: goto label_299948;
        case 0x29994cu: goto label_29994c;
        case 0x299950u: goto label_299950;
        case 0x299954u: goto label_299954;
        case 0x299958u: goto label_299958;
        case 0x29995cu: goto label_29995c;
        default: break;
    }

    ctx->pc = 0x2998a8u;

label_2998a8:
    // 0x2998a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2998a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2998ac:
    // 0x2998ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2998acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2998b0:
    // 0x2998b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2998b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2998b4:
    // 0x2998b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2998b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2998b8:
    // 0x2998b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2998b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2998bc:
    // 0x2998bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2998bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2998c0:
    // 0x2998c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2998c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2998c4:
    // 0x2998c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2998c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2998c8:
    // 0x2998c8: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x2998c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_2998cc:
    // 0x2998cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2998d0:
    if (ctx->pc == 0x2998D0u) {
        ctx->pc = 0x2998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998CCu;
        // 0x2998d0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2998D4u;
        goto label_2998d4;
    }
    ctx->pc = 0x2998CCu;
    {
        const bool branch_taken_0x2998cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998CCu;
        // 0x2998d0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998cc) {
            ctx->pc = 0x2998DCu;
            goto label_2998dc;
        }
    }
    ctx->pc = 0x2998D4u;
label_2998d4:
    // 0x2998d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2998d8:
    if (ctx->pc == 0x2998D8u) {
        ctx->pc = 0x2998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998D4u;
        // 0x2998d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2998DCu;
        goto label_2998dc;
    }
    ctx->pc = 0x2998D4u;
    {
        const bool branch_taken_0x2998d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998D4u;
        // 0x2998d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998d4) {
            ctx->pc = 0x2998F4u;
            goto label_2998f4;
        }
    }
    ctx->pc = 0x2998DCu;
label_2998dc:
    // 0x2998dc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2998dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2998e0:
    // 0x2998e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2998e4:
    if (ctx->pc == 0x2998E4u) {
        ctx->pc = 0x2998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998E0u;
        // 0x2998e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2998E8u;
        goto label_2998e8;
    }
    ctx->pc = 0x2998E0u;
    {
        const bool branch_taken_0x2998e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998E0u;
        // 0x2998e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998e0) {
            ctx->pc = 0x2998F4u;
            goto label_2998f4;
        }
    }
    ctx->pc = 0x2998E8u;
label_2998e8:
    // 0x2998e8: 0xc0a65a0  jal         func_299680
label_2998ec:
    if (ctx->pc == 0x2998ECu) {
        ctx->pc = 0x2998F0u;
        goto label_2998f0;
    }
    ctx->pc = 0x2998E8u;
    SET_GPR_U32(ctx, 31, 0x2998F0u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x2998E8u, 0x2998F0u)) {
        return;
    }
    ctx->pc = 0x2998F0u;
label_2998f0:
    // 0x2998f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2998f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2998f4:
    // 0x2998f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2998f8:
    if (ctx->pc == 0x2998F8u) {
        ctx->pc = 0x2998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998F4u;
        // 0x2998f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2998FCu;
        goto label_2998fc;
    }
    ctx->pc = 0x2998F4u;
    {
        const bool branch_taken_0x2998f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998F4u;
        // 0x2998f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998f4) {
            ctx->pc = 0x299944u;
            goto label_299944;
        }
    }
    ctx->pc = 0x2998FCu;
label_2998fc:
    // 0x2998fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2998fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_299900:
    // 0x299900: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x299900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_299904:
    // 0x299904: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x299904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_299908:
    // 0x299908: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x299908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29990c:
    // 0x29990c: 0x40f809  jalr        $v0
label_299910:
    if (ctx->pc == 0x299910u) {
        ctx->pc = 0x299910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29990Cu;
        // 0x299910: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299914u;
        goto label_299914;
    }
    ctx->pc = 0x29990Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x299914u);
        ctx->pc = 0x299910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29990Cu;
        // 0x299910: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29990Cu, 0x299914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299914u;
label_299914:
    // 0x299914: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_299918:
    if (ctx->pc == 0x299918u) {
        ctx->pc = 0x299918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299914u;
        // 0x299918: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29991Cu;
        goto label_29991c;
    }
    ctx->pc = 0x299914u;
    {
        const bool branch_taken_0x299914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x299918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299914u;
        // 0x299918: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299914) {
            ctx->pc = 0x29992Cu;
            goto label_29992c;
        }
    }
    ctx->pc = 0x29991Cu;
label_29991c:
    // 0x29991c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29991cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_299920:
    // 0x299920: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x299920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_299924:
    // 0x299924: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x299924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_299928:
    // 0x299928: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x299928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29992c:
    // 0x29992c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x29992cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_299930:
    // 0x299930: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x299930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_299934:
    // 0x299934: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_299938:
    if (ctx->pc == 0x299938u) {
        ctx->pc = 0x299938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299934u;
        // 0x299938: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29993Cu;
        goto label_29993c;
    }
    ctx->pc = 0x299934u;
    {
        const bool branch_taken_0x299934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299934u;
        // 0x299938: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299934) {
            ctx->pc = 0x299948u;
            goto label_299948;
        }
    }
    ctx->pc = 0x29993Cu;
label_29993c:
    // 0x29993c: 0xc0a6658  jal         func_299960
label_299940:
    if (ctx->pc == 0x299940u) {
        ctx->pc = 0x299940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29993Cu;
        // 0x299940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299944u;
        goto label_299944;
    }
    ctx->pc = 0x29993Cu;
    SET_GPR_U32(ctx, 31, 0x299944u);
    ctx->pc = 0x299940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29993Cu;
    // 0x299940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299960u, 0x29993Cu, 0x299944u)) {
        return;
    }
    ctx->pc = 0x299944u;
label_299944:
    // 0x299944: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299948:
    // 0x299948: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x299948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29994c:
    // 0x29994c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29994cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_299950:
    // 0x299950: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_299954:
    // 0x299954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299958:
    // 0x299958: 0x3e00008  jr          $ra
label_29995c:
    if (ctx->pc == 0x29995Cu) {
        ctx->pc = 0x29995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299958u;
        // 0x29995c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299960u;
        goto label_fallthrough_0x299958;
    }
    ctx->pc = 0x299958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299958u;
        // 0x29995c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x299958:
    ctx->pc = 0x299960u;
}
