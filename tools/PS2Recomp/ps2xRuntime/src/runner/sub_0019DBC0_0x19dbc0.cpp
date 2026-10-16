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

// Function: sub_0019DBC0
// Address: 0x19dbc0 - 0x19dc18
void sub_0019DBC0_0x19dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DBC0_0x19dbc0");
#endif

    switch (ctx->pc) {
        case 0x19dbe8u: goto label_19dbe8;
        case 0x19dbfcu: goto label_19dbfc;
        default: break;
    }

    ctx->pc = 0x19dbc0u;

    // 0x19dbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19dbc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19dbc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19dbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19dbcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19dbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19dbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19dbd4: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x19dbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x19dbd8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DBD8u;
    {
        const bool branch_taken_0x19dbd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBD8u;
        // 0x19dbdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbd8) {
            ctx->pc = 0x19DC00u;
            goto label_19dc00;
        }
    }
    ctx->pc = 0x19DBE0u;
    // 0x19dbe0: 0xc086cea  jal         func_21B3A8
    ctx->pc = 0x19DBE0u;
    SET_GPR_U32(ctx, 31, 0x19DBE8u);
    ctx->pc = 0x19DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBE0u;
    // 0x19dbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B3A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B3A8u, 0x19DBE0u, 0x19DBE8u)) {
        return;
    }
    ctx->pc = 0x19DBE8u;
label_19dbe8:
    // 0x19dbe8: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x19dbec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19dbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbf0: 0x24a5db38  addiu       $a1, $a1, -0x24C8
    ctx->pc = 0x19dbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957880));
    // 0x19dbf4: 0xc095966  jal         func_256598
    ctx->pc = 0x19DBF4u;
    SET_GPR_U32(ctx, 31, 0x19DBFCu);
    ctx->pc = 0x19DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBF4u;
    // 0x19dbf8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256598u, 0x19DBF4u, 0x19DBFCu)) {
        return;
    }
    ctx->pc = 0x19DBFCu;
label_19dbfc:
    // 0x19dbfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19dbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19dc00:
    // 0x19dc00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19dc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dc04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19dc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x19DC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC0Cu;
        // 0x19dc10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DC14u;
    // 0x19dc14: 0x0  nop
    ctx->pc = 0x19dc14u;
    // NOP
    ctx->pc = 0x19dc18u;
}
