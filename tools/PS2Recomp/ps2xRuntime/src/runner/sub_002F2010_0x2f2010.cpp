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

// Function: sub_002F2010
// Address: 0x2f2010 - 0x2f2058
void sub_002F2010_0x2f2010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2010_0x2f2010");
#endif

    switch (ctx->pc) {
        case 0x2f2028u: goto label_2f2028;
        default: break;
    }

    ctx->pc = 0x2f2010u;

    // 0x2f2010: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f2010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f2014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2018: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2f2018u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f201c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F201Cu;
    {
        const bool branch_taken_0x2f201c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F201Cu;
        // 0x2f2020: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f201c) {
            ctx->pc = 0x2F204Cu;
            goto label_2f204c;
        }
    }
    ctx->pc = 0x2F2024u;
    // 0x2f2024: 0x0  nop
    ctx->pc = 0x2f2024u;
    // NOP
label_2f2028:
    // 0x2f2028: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2f2028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2f202c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f202cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f2030: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f2030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f2034: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2f2034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f2038: 0x3842002f  xori        $v0, $v0, 0x2F
    ctx->pc = 0x2f2038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)47);
    // 0x2f203c: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x2f203cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f2040: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x2f2040u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
    // 0x2f2044: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F2044u;
    {
        const bool branch_taken_0x2f2044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2044u;
        // 0x2f2048: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2044) {
            ctx->pc = 0x2F2028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2028;
        }
    }
    ctx->pc = 0x2F204Cu;
label_2f204c:
    // 0x2f204c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F204Cu;
        // 0x2f2050: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F204Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2054u;
    // 0x2f2054: 0x0  nop
    ctx->pc = 0x2f2054u;
    // NOP
    ctx->pc = 0x2f2058u;
}
