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

// Function: sub_001B90D8
// Address: 0x1b90d8 - 0x1b91b8
void sub_001B90D8_0x1b90d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B90D8_0x1b90d8");
#endif

    switch (ctx->pc) {
        case 0x1b90f4u: goto label_1b90f4;
        case 0x1b90f8u: goto label_1b90f8;
        case 0x1b914cu: goto label_1b914c;
        case 0x1b919cu: goto label_1b919c;
        default: break;
    }

    ctx->pc = 0x1b90d8u;

    // 0x1b90d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b90d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b90dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b90dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b90e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b90e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b90e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b90e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b90e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b90ec: 0x26300318  addiu       $s0, $s1, 0x318
    ctx->pc = 0x1b90ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 792));
    // 0x1b90f0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1b90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_1b90f4:
    // 0x1b90f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b90f8:
    // 0x1b90f8: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B90F8u;
    {
        const bool branch_taken_0x1b90f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b90f8) {
            ctx->pc = 0x1B90FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B90F8u;
            // 0x1b90fc: 0x8e22028c  lw          $v0, 0x28C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B915Cu;
            goto label_1b915c;
        }
    }
    ctx->pc = 0x1B9100u;
    // 0x1b9100: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b9100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b9104: 0x0  nop
    ctx->pc = 0x1b9104u;
    // NOP
    // 0x1b9108: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B9108u;
    {
        const bool branch_taken_0x1b9108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9108) {
            ctx->pc = 0x1B90F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b90f8;
        }
    }
    ctx->pc = 0x1B9110u;
    // 0x1b9110: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b9110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b9114: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9114u;
    {
        const bool branch_taken_0x1b9114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9114u;
        // 0x1b9118: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9114) {
            ctx->pc = 0x1B9128u;
            goto label_1b9128;
        }
    }
    ctx->pc = 0x1B911Cu;
    // 0x1b911c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B911Cu;
    {
        const bool branch_taken_0x1b911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B911Cu;
        // 0x1b9120: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b911c) {
            ctx->pc = 0x1B912Cu;
            goto label_1b912c;
        }
    }
    ctx->pc = 0x1B9124u;
    // 0x1b9124: 0x0  nop
    ctx->pc = 0x1b9124u;
    // NOP
label_1b9128:
    // 0x1b9128: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b9128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b912c:
    // 0x1b912c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b9130: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9130u;
    {
        const bool branch_taken_0x1b9130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9130u;
        // 0x1b9134: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9130) {
            ctx->pc = 0x1B9140u;
            goto label_1b9140;
        }
    }
    ctx->pc = 0x1B9138u;
    // 0x1b9138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9138u;
    {
        const bool branch_taken_0x1b9138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9138u;
        // 0x1b913c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9138) {
            ctx->pc = 0x1B9144u;
            goto label_1b9144;
        }
    }
    ctx->pc = 0x1B9140u;
label_1b9140:
    // 0x1b9140: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b9140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b9144:
    // 0x1b9144: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B9144u;
    SET_GPR_U32(ctx, 31, 0x1B914Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B9144u, 0x1B914Cu)) {
        return;
    }
    ctx->pc = 0x1B914Cu;
label_1b914c:
    // 0x1b914c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9150: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b9150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b9154: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B9154u;
    {
        const bool branch_taken_0x1b9154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9154u;
        // 0x1b9158: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9154) {
            ctx->pc = 0x1B90F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b90f4;
        }
    }
    ctx->pc = 0x1B915Cu;
label_1b915c:
    // 0x1b915c: 0xc62002d0  lwc1        $f0, 0x2D0($s1)
    ctx->pc = 0x1b915cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9160: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b9160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b9164: 0x8e230290  lw          $v1, 0x290($s1)
    ctx->pc = 0x1b9164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x1b9168: 0xc62002e4  lwc1        $f0, 0x2E4($s1)
    ctx->pc = 0x1b9168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b916c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1b916cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b9170: 0xc62002f8  lwc1        $f0, 0x2F8($s1)
    ctx->pc = 0x1b9170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9174: 0x8e220294  lw          $v0, 0x294($s1)
    ctx->pc = 0x1b9174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
    // 0x1b9178: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b9178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b917c: 0x8e230298  lw          $v1, 0x298($s1)
    ctx->pc = 0x1b917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x1b9180: 0xc620030c  lwc1        $f0, 0x30C($s1)
    ctx->pc = 0x1b9180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9184: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b9184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b9188: 0x8e2402a4  lw          $a0, 0x2A4($s1)
    ctx->pc = 0x1b9188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
    // 0x1b918c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B918Cu;
    {
        const bool branch_taken_0x1b918c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B918Cu;
        // 0x1b9190: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b918c) {
            ctx->pc = 0x1B91A4u;
            goto label_1b91a4;
        }
    }
    ctx->pc = 0x1B9194u;
    // 0x1b9194: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x1B9194u;
    SET_GPR_U32(ctx, 31, 0x1B919Cu);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x1B9194u, 0x1B919Cu)) {
        return;
    }
    ctx->pc = 0x1B919Cu;
label_1b919c:
    // 0x1b919c: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x1b919cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
    // 0x1b91a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b91a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b91a4:
    // 0x1b91a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b91a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b91a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b91a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b91ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B91ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91ACu;
        // 0x1b91b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B91ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B91B4u;
    // 0x1b91b4: 0x0  nop
    ctx->pc = 0x1b91b4u;
    // NOP
    ctx->pc = 0x1b91b8u;
}
