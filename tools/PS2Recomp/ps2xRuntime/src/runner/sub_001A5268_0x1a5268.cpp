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

// Function: sub_001A5268
// Address: 0x1a5268 - 0x1a5308
void sub_001A5268_0x1a5268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5268_0x1a5268");
#endif

    switch (ctx->pc) {
        case 0x1a529cu: goto label_1a529c;
        case 0x1a52a8u: goto label_1a52a8;
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52e4u: goto label_1a52e4;
        case 0x1a52f0u: goto label_1a52f0;
        default: break;
    }

    ctx->pc = 0x1a5268u;

    // 0x1a5268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a526c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1a5270: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a5270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a5274: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1a5274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1a5278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a527c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5284: 0x2463b248  addiu       $v1, $v1, -0x4DB8
    ctx->pc = 0x1a5284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947400));
    // 0x1a5288: 0x2442b228  addiu       $v0, $v0, -0x4DD8
    ctx->pc = 0x1a5288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947368));
    // 0x1a528c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a528cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5290: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1a5290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1a5294: 0xc0691ec  jal         func_1A47B0
    ctx->pc = 0x1A5294u;
    SET_GPR_U32(ctx, 31, 0x1A529Cu);
    ctx->pc = 0x1A5298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5294u;
    // 0x1a5298: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x1A5294u, 0x1A529Cu)) {
        return;
    }
    ctx->pc = 0x1A529Cu;
label_1a529c:
    // 0x1a529c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a529cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a52a0: 0xc069266  jal         func_1A4998
    ctx->pc = 0x1A52A0u;
    SET_GPR_U32(ctx, 31, 0x1A52A8u);
    ctx->pc = 0x1A52A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52A0u;
    // 0x1a52a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4998u, 0x1A52A0u, 0x1A52A8u)) {
        return;
    }
    ctx->pc = 0x1A52A8u;
label_1a52a8:
    // 0x1a52a8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1a52a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1a52ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A52ACu;
    {
        const bool branch_taken_0x1a52ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a52ac) {
            ctx->pc = 0x1A52B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A52ACu;
            // 0x1a52b0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A52C0u;
            goto label_1a52c0;
        }
    }
    ctx->pc = 0x1A52B4u;
    // 0x1a52b4: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A52B4u;
    SET_GPR_U32(ctx, 31, 0x1A52BCu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A52B4u, 0x1A52BCu)) {
        return;
    }
    ctx->pc = 0x1A52BCu;
label_1a52bc:
    // 0x1a52bc: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1a52bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1a52c0:
    // 0x1a52c0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A52C0u;
    {
        const bool branch_taken_0x1a52c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a52c0) {
            ctx->pc = 0x1A52C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A52C0u;
            // 0x1a52c4: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A52D4u;
            goto label_1a52d4;
        }
    }
    ctx->pc = 0x1A52C8u;
    // 0x1a52c8: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A52C8u;
    SET_GPR_U32(ctx, 31, 0x1A52D0u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A52C8u, 0x1A52D0u)) {
        return;
    }
    ctx->pc = 0x1A52D0u;
label_1a52d0:
    // 0x1a52d0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x1a52d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1a52d4:
    // 0x1a52d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A52D4u;
    {
        const bool branch_taken_0x1a52d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a52d4) {
            ctx->pc = 0x1A52D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A52D4u;
            // 0x1a52d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A52E8u;
            goto label_1a52e8;
        }
    }
    ctx->pc = 0x1A52DCu;
    // 0x1a52dc: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A52DCu;
    SET_GPR_U32(ctx, 31, 0x1A52E4u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A52DCu, 0x1A52E4u)) {
        return;
    }
    ctx->pc = 0x1A52E4u;
label_1a52e4:
    // 0x1a52e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a52e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a52e8:
    // 0x1a52e8: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1A52E8u;
    SET_GPR_U32(ctx, 31, 0x1A52F0u);
    ctx->pc = 0x1A52ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52E8u;
    // 0x1a52ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1A52E8u, 0x1A52F0u)) {
        return;
    }
    ctx->pc = 0x1A52F0u;
label_1a52f0:
    // 0x1a52f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a52f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a52f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a52f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a52f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a52f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a52fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A52FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52FCu;
        // 0x1a5300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A52FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5304u;
    // 0x1a5304: 0x0  nop
    ctx->pc = 0x1a5304u;
    // NOP
    ctx->pc = 0x1a5308u;
}
