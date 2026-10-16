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

// Function: sub_001081F0
// Address: 0x1081f0 - 0x108268
void sub_001081F0_0x1081f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001081F0_0x1081f0");
#endif

    switch (ctx->pc) {
        case 0x108218u: goto label_108218;
        case 0x108228u: goto label_108228;
        case 0x108230u: goto label_108230;
        case 0x108250u: goto label_108250;
        default: break;
    }

    ctx->pc = 0x1081f0u;

    // 0x1081f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1081f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1081f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1081f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1081f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1081f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1081fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1081fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108200: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x108200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x108204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108208: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x108208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10820c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10820Cu;
    {
        const bool branch_taken_0x10820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10820Cu;
        // 0x108210: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10820c) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x108214u;
    // 0x108214: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x108214u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_108218:
    // 0x108218: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x108218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10821c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10821cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x108220: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x108220u;
    SET_GPR_U32(ctx, 31, 0x108228u);
    ctx->pc = 0x108224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108220u;
    // 0x108224: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x108220u, 0x108228u)) {
        return;
    }
    ctx->pc = 0x108228u;
label_108228:
    // 0x108228: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x108228u;
    SET_GPR_U32(ctx, 31, 0x108230u);
    ctx->pc = 0x10822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108228u;
    // 0x10822c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x108228u, 0x108230u)) {
        return;
    }
    ctx->pc = 0x108230u;
label_108230:
    // 0x108230: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x108230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x108234: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x108234u;
    {
        const bool branch_taken_0x108234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108234) {
            ctx->pc = 0x108238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108234u;
            // 0x108238: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108218;
        }
    }
    ctx->pc = 0x10823Cu;
label_10823c:
    // 0x10823c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x10823cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x108240: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108240u;
    {
        const bool branch_taken_0x108240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108240u;
        // 0x108244: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108240) {
            ctx->pc = 0x108254u;
            goto label_108254;
        }
    }
    ctx->pc = 0x108248u;
    // 0x108248: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x108248u;
    SET_GPR_U32(ctx, 31, 0x108250u);
    ctx->pc = 0x10824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108248u;
    // 0x10824c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x108248u, 0x108250u)) {
        return;
    }
    ctx->pc = 0x108250u;
label_108250:
    // 0x108250: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x108250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_108254:
    // 0x108254: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x108254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108258: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x108258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10825c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10825cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108260: 0x3e00008  jr          $ra
    ctx->pc = 0x108260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108260u;
        // 0x108264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108268u;
}
