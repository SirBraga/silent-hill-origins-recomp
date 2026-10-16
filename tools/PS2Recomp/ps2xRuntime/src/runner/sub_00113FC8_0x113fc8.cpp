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

// Function: sub_00113FC8
// Address: 0x113fc8 - 0x114058
void sub_00113FC8_0x113fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113FC8_0x113fc8");
#endif

    switch (ctx->pc) {
        case 0x113ff8u: goto label_113ff8;
        case 0x11402cu: goto label_11402c;
        default: break;
    }

    ctx->pc = 0x113fc8u;

    // 0x113fc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x113fcc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x113fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x113fd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x113fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x113fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113fd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x113fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x113fdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x113fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113fe4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x113fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113fe8: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x113FE8u;
    {
        const bool branch_taken_0x113fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FE8u;
        // 0x113fec: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fe8) {
            ctx->pc = 0x114040u;
            goto label_114040;
        }
    }
    ctx->pc = 0x113FF0u;
    // 0x113ff0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x113ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113ff4: 0x0  nop
    ctx->pc = 0x113ff4u;
    // NOP
label_113ff8:
    // 0x113ff8: 0x5452000e  bnel        $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x113FF8u;
    {
        const bool branch_taken_0x113ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x113ff8) {
            ctx->pc = 0x113FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113FF8u;
            // 0x113ffc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114034u;
            goto label_114034;
        }
    }
    ctx->pc = 0x114000u;
    // 0x114000: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x114000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x114004: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114004u;
    {
        const bool branch_taken_0x114004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x114004) {
            ctx->pc = 0x114014u;
            goto label_114014;
        }
    }
    ctx->pc = 0x11400Cu;
    // 0x11400c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x114010: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x114010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_114014:
    // 0x114014: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114014u;
    {
        const bool branch_taken_0x114014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x114014) {
            ctx->pc = 0x114024u;
            goto label_114024;
        }
    }
    ctx->pc = 0x11401Cu;
    // 0x11401c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x114020: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x114020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_114024:
    // 0x114024: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x114024u;
    SET_GPR_U32(ctx, 31, 0x11402Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x114024u, 0x11402Cu)) {
        return;
    }
    ctx->pc = 0x11402Cu;
label_11402c:
    // 0x11402c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11402Cu;
    {
        const bool branch_taken_0x11402c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11402Cu;
        // 0x114030: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11402c) {
            ctx->pc = 0x114038u;
            goto label_114038;
        }
    }
    ctx->pc = 0x114034u;
label_114034:
    // 0x114034: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x114034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_114038:
    // 0x114038: 0x5480ffef  bnel        $a0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x114038u;
    {
        const bool branch_taken_0x114038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x114038) {
            ctx->pc = 0x11403Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114038u;
            // 0x11403c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113ff8;
        }
    }
    ctx->pc = 0x114040u;
label_114040:
    // 0x114040: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x114040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114044: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x114044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114048: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x114048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11404c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11404cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114050: 0x3e00008  jr          $ra
    ctx->pc = 0x114050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114050u;
        // 0x114054: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114058u;
}
