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

// Function: sub_00137058
// Address: 0x137058 - 0x137118
void sub_00137058_0x137058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137058_0x137058");
#endif

    switch (ctx->pc) {
        case 0x137058u: goto label_137058;
        case 0x13705cu: goto label_13705c;
        case 0x137060u: goto label_137060;
        case 0x137064u: goto label_137064;
        case 0x137068u: goto label_137068;
        case 0x13706cu: goto label_13706c;
        case 0x137070u: goto label_137070;
        case 0x137074u: goto label_137074;
        case 0x137078u: goto label_137078;
        case 0x13707cu: goto label_13707c;
        case 0x137080u: goto label_137080;
        case 0x137084u: goto label_137084;
        case 0x137088u: goto label_137088;
        case 0x13708cu: goto label_13708c;
        case 0x137090u: goto label_137090;
        case 0x137094u: goto label_137094;
        case 0x137098u: goto label_137098;
        case 0x13709cu: goto label_13709c;
        case 0x1370a0u: goto label_1370a0;
        case 0x1370a4u: goto label_1370a4;
        case 0x1370a8u: goto label_1370a8;
        case 0x1370acu: goto label_1370ac;
        case 0x1370b0u: goto label_1370b0;
        case 0x1370b4u: goto label_1370b4;
        case 0x1370b8u: goto label_1370b8;
        case 0x1370bcu: goto label_1370bc;
        case 0x1370c0u: goto label_1370c0;
        case 0x1370c4u: goto label_1370c4;
        case 0x1370c8u: goto label_1370c8;
        case 0x1370ccu: goto label_1370cc;
        case 0x1370d0u: goto label_1370d0;
        case 0x1370d4u: goto label_1370d4;
        case 0x1370d8u: goto label_1370d8;
        case 0x1370dcu: goto label_1370dc;
        case 0x1370e0u: goto label_1370e0;
        case 0x1370e4u: goto label_1370e4;
        case 0x1370e8u: goto label_1370e8;
        case 0x1370ecu: goto label_1370ec;
        case 0x1370f0u: goto label_1370f0;
        case 0x1370f4u: goto label_1370f4;
        case 0x1370f8u: goto label_1370f8;
        case 0x1370fcu: goto label_1370fc;
        case 0x137100u: goto label_137100;
        case 0x137104u: goto label_137104;
        case 0x137108u: goto label_137108;
        case 0x13710cu: goto label_13710c;
        case 0x137110u: goto label_137110;
        case 0x137114u: goto label_137114;
        default: break;
    }

    ctx->pc = 0x137058u;

label_137058:
    // 0x137058: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x137058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_13705c:
    // 0x13705c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x13705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_137060:
    // 0x137060: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x137060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_137064:
    // 0x137064: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x137064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_137068:
    // 0x137068: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x137068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13706c:
    // 0x13706c: 0xc049a9c  jal         func_126A70
label_137070:
    if (ctx->pc == 0x137070u) {
        ctx->pc = 0x137070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13706Cu;
        // 0x137070: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137074u;
        goto label_137074;
    }
    ctx->pc = 0x13706Cu;
    SET_GPR_U32(ctx, 31, 0x137074u);
    ctx->pc = 0x137070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13706Cu;
    // 0x137070: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126A70u, 0x13706Cu, 0x137074u)) {
        return;
    }
    ctx->pc = 0x137074u;
label_137074:
    // 0x137074: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x137074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_137078:
    // 0x137078: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x137078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_13707c:
    // 0x13707c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x13707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_137080:
    // 0x137080: 0x40f809  jalr        $v0
label_137084:
    if (ctx->pc == 0x137084u) {
        ctx->pc = 0x137084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137080u;
        // 0x137084: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137088u;
        goto label_137088;
    }
    ctx->pc = 0x137080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137088u);
        ctx->pc = 0x137084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137080u;
        // 0x137084: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137080u, 0x137088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137088u;
label_137088:
    // 0x137088: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x137088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_13708c:
    // 0x13708c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x13708cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_137090:
    // 0x137090: 0x8c6544c8  lw          $a1, 0x44C8($v1)
    ctx->pc = 0x137090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17608)));
label_137094:
    // 0x137094: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x137094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_137098:
    // 0x137098: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x137098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_13709c:
    // 0x13709c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_1370a0:
    if (ctx->pc == 0x1370A0u) {
        ctx->pc = 0x1370A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13709Cu;
        // 0x1370a0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370A4u;
        goto label_1370a4;
    }
    ctx->pc = 0x13709Cu;
    {
        const bool branch_taken_0x13709c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1370A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13709Cu;
        // 0x1370a0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13709c) {
            ctx->pc = 0x1370B8u;
            goto label_1370b8;
        }
    }
    ctx->pc = 0x1370A4u;
label_1370a4:
    // 0x1370a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1370a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1370a8:
    // 0x1370a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1370ac:
    if (ctx->pc == 0x1370ACu) {
        ctx->pc = 0x1370B0u;
        goto label_1370b0;
    }
    ctx->pc = 0x1370A8u;
    {
        const bool branch_taken_0x1370a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1370a8) {
            ctx->pc = 0x1370B8u;
            goto label_1370b8;
        }
    }
    ctx->pc = 0x1370B0u;
label_1370b0:
    // 0x1370b0: 0xc07fd18  jal         func_1FF460
label_1370b4:
    if (ctx->pc == 0x1370B4u) {
        ctx->pc = 0x1370B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370B0u;
        // 0x1370b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370B8u;
        goto label_1370b8;
    }
    ctx->pc = 0x1370B0u;
    SET_GPR_U32(ctx, 31, 0x1370B8u);
    ctx->pc = 0x1370B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370B0u;
    // 0x1370b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1370B0u, 0x1370B8u)) {
        return;
    }
    ctx->pc = 0x1370B8u;
label_1370b8:
    // 0x1370b8: 0xc04c00a  jal         func_130028
label_1370bc:
    if (ctx->pc == 0x1370BCu) {
        ctx->pc = 0x1370BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370B8u;
        // 0x1370bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370C0u;
        goto label_1370c0;
    }
    ctx->pc = 0x1370B8u;
    SET_GPR_U32(ctx, 31, 0x1370C0u);
    ctx->pc = 0x1370BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370B8u;
    // 0x1370bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x130028u, 0x1370B8u, 0x1370C0u)) {
        return;
    }
    ctx->pc = 0x1370C0u;
label_1370c0:
    // 0x1370c0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1370c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1370c4:
    // 0x1370c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1370c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1370c8:
    // 0x1370c8: 0xc04f0c2  jal         func_13C308
label_1370cc:
    if (ctx->pc == 0x1370CCu) {
        ctx->pc = 0x1370CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370C8u;
        // 0x1370cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370D0u;
        goto label_1370d0;
    }
    ctx->pc = 0x1370C8u;
    SET_GPR_U32(ctx, 31, 0x1370D0u);
    ctx->pc = 0x1370CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370C8u;
    // 0x1370cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x1370C8u, 0x1370D0u)) {
        return;
    }
    ctx->pc = 0x1370D0u;
label_1370d0:
    // 0x1370d0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1370d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1370d4:
    // 0x1370d4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1370d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1370d8:
    // 0x1370d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1370d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1370dc:
    // 0x1370dc: 0x84640208  lh          $a0, 0x208($v1)
    ctx->pc = 0x1370dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 520)));
label_1370e0:
    // 0x1370e0: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x1370e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_1370e4:
    // 0x1370e4: 0x40f809  jalr        $v0
label_1370e8:
    if (ctx->pc == 0x1370E8u) {
        ctx->pc = 0x1370E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370E4u;
        // 0x1370e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370ECu;
        goto label_1370ec;
    }
    ctx->pc = 0x1370E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1370ECu);
        ctx->pc = 0x1370E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370E4u;
        // 0x1370e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1370E4u, 0x1370ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1370ECu;
label_1370ec:
    // 0x1370ec: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1370ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1370f0:
    // 0x1370f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1370f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1370f4:
    // 0x1370f4: 0x8c648ac0  lw          $a0, -0x7540($v1)
    ctx->pc = 0x1370f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937280)));
label_1370f8:
    // 0x1370f8: 0xc06217e  jal         func_1885F8
label_1370fc:
    if (ctx->pc == 0x1370FCu) {
        ctx->pc = 0x1370FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370F8u;
        // 0x1370fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137100u;
        goto label_137100;
    }
    ctx->pc = 0x1370F8u;
    SET_GPR_U32(ctx, 31, 0x137100u);
    ctx->pc = 0x1370FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370F8u;
    // 0x1370fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1885F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1885F8u, 0x1370F8u, 0x137100u)) {
        return;
    }
    ctx->pc = 0x137100u;
label_137100:
    // 0x137100: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x137100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_137104:
    // 0x137104: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x137104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_137108:
    // 0x137108: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x137108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13710c:
    // 0x13710c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13710cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_137110:
    // 0x137110: 0x3e00008  jr          $ra
label_137114:
    if (ctx->pc == 0x137114u) {
        ctx->pc = 0x137114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137110u;
        // 0x137114: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137118u;
        goto label_fallthrough_0x137110;
    }
    ctx->pc = 0x137110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137110u;
        // 0x137114: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x137110:
    ctx->pc = 0x137118u;
}
