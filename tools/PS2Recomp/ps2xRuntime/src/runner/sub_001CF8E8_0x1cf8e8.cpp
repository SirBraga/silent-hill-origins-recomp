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

// Function: sub_001CF8E8
// Address: 0x1cf8e8 - 0x1cf978
void sub_001CF8E8_0x1cf8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF8E8_0x1cf8e8");
#endif

    switch (ctx->pc) {
        case 0x1cf910u: goto label_1cf910;
        case 0x1cf928u: goto label_1cf928;
        case 0x1cf938u: goto label_1cf938;
        case 0x1cf950u: goto label_1cf950;
        default: break;
    }

    ctx->pc = 0x1cf8e8u;

    // 0x1cf8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf8ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cf8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cf8f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf8f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf8fc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CF8FCu;
    {
        const bool branch_taken_0x1cf8fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8FCu;
        // 0x1cf900: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8fc) {
            ctx->pc = 0x1CF958u;
            goto label_1cf958;
        }
    }
    ctx->pc = 0x1CF904u;
    // 0x1cf904: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cf904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cf908: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1CF908u;
    SET_GPR_U32(ctx, 31, 0x1CF910u);
    ctx->pc = 0x1CF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF908u;
    // 0x1cf90c: 0x24a50858  addiu       $a1, $a1, 0x858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CF908u, 0x1CF910u)) {
        return;
    }
    ctx->pc = 0x1CF910u;
label_1cf910:
    // 0x1cf910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF910u;
    {
        const bool branch_taken_0x1cf910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF910u;
        // 0x1cf914: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf910) {
            ctx->pc = 0x1CF928u;
            goto label_1cf928;
        }
    }
    ctx->pc = 0x1CF918u;
    // 0x1cf918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf91c: 0x24c6f888  addiu       $a2, $a2, -0x778
    ctx->pc = 0x1cf91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965384));
    // 0x1cf920: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1CF920u;
    SET_GPR_U32(ctx, 31, 0x1CF928u);
    ctx->pc = 0x1CF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF920u;
    // 0x1cf924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1CF920u, 0x1CF928u)) {
        return;
    }
    ctx->pc = 0x1CF928u;
label_1cf928:
    // 0x1cf928: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cf928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cf92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf930: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1CF930u;
    SET_GPR_U32(ctx, 31, 0x1CF938u);
    ctx->pc = 0x1CF934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF930u;
    // 0x1cf934: 0x24a50870  addiu       $a1, $a1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CF930u, 0x1CF938u)) {
        return;
    }
    ctx->pc = 0x1CF938u;
label_1cf938:
    // 0x1cf938: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF938u;
    {
        const bool branch_taken_0x1cf938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF938u;
        // 0x1cf93c: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf938) {
            ctx->pc = 0x1CF95Cu;
            goto label_1cf95c;
        }
    }
    ctx->pc = 0x1CF940u;
    // 0x1cf940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf944: 0x24c6f808  addiu       $a2, $a2, -0x7F8
    ctx->pc = 0x1cf944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965256));
    // 0x1cf948: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1CF948u;
    SET_GPR_U32(ctx, 31, 0x1CF950u);
    ctx->pc = 0x1CF94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF948u;
    // 0x1cf94c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1CF948u, 0x1CF950u)) {
        return;
    }
    ctx->pc = 0x1CF950u;
label_1cf950:
    // 0x1cf950: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF950u;
    {
        const bool branch_taken_0x1cf950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF950u;
        // 0x1cf954: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf950) {
            ctx->pc = 0x1CF960u;
            goto label_1cf960;
        }
    }
    ctx->pc = 0x1CF958u;
label_1cf958:
    // 0x1cf958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cf958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf95c:
    // 0x1cf95c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cf95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cf960:
    // 0x1cf960: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cf960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf96c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF96Cu;
        // 0x1cf970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF974u;
    // 0x1cf974: 0x0  nop
    ctx->pc = 0x1cf974u;
    // NOP
    ctx->pc = 0x1cf978u;
}
