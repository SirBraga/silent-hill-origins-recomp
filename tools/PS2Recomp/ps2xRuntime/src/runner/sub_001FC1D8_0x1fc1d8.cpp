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

// Function: sub_001FC1D8
// Address: 0x1fc1d8 - 0x1fc260
void sub_001FC1D8_0x1fc1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC1D8_0x1fc1d8");
#endif

    switch (ctx->pc) {
        case 0x1fc1f8u: goto label_1fc1f8;
        case 0x1fc208u: goto label_1fc208;
        case 0x1fc218u: goto label_1fc218;
        case 0x1fc228u: goto label_1fc228;
        case 0x1fc238u: goto label_1fc238;
        case 0x1fc244u: goto label_1fc244;
        default: break;
    }

    ctx->pc = 0x1fc1d8u;

    // 0x1fc1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc1dc: 0x24040704  addiu       $a0, $zero, 0x704
    ctx->pc = 0x1fc1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1796));
    // 0x1fc1e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fc1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fc1e4: 0x3c100020  lui         $s0, 0x20
    ctx->pc = 0x1fc1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32 << 16));
    // 0x1fc1e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc1ec: 0x2610c118  addiu       $s0, $s0, -0x3EE8
    ctx->pc = 0x1fc1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951192));
    // 0x1fc1f0: 0xc080052  jal         func_200148
    ctx->pc = 0x1FC1F0u;
    SET_GPR_U32(ctx, 31, 0x1FC1F8u);
    ctx->pc = 0x1FC1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC1F0u;
    // 0x1fc1f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1FC1F0u, 0x1FC1F8u)) {
        return;
    }
    ctx->pc = 0x1FC1F8u;
label_1fc1f8:
    // 0x1fc1f8: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fc1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1fc1fc: 0x24040705  addiu       $a0, $zero, 0x705
    ctx->pc = 0x1fc1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1797));
    // 0x1fc200: 0xc080052  jal         func_200148
    ctx->pc = 0x1FC200u;
    SET_GPR_U32(ctx, 31, 0x1FC208u);
    ctx->pc = 0x1FC204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC200u;
    // 0x1fc204: 0x24a5c080  addiu       $a1, $a1, -0x3F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1FC200u, 0x1FC208u)) {
        return;
    }
    ctx->pc = 0x1FC208u;
label_1fc208:
    // 0x1fc208: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fc208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1fc20c: 0x2404070d  addiu       $a0, $zero, 0x70D
    ctx->pc = 0x1fc20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1805));
    // 0x1fc210: 0xc080052  jal         func_200148
    ctx->pc = 0x1FC210u;
    SET_GPR_U32(ctx, 31, 0x1FC218u);
    ctx->pc = 0x1FC214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC210u;
    // 0x1fc214: 0x24a5bfd0  addiu       $a1, $a1, -0x4030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1FC210u, 0x1FC218u)) {
        return;
    }
    ctx->pc = 0x1FC218u;
label_1fc218:
    // 0x1fc218: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fc218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1fc21c: 0x2404070e  addiu       $a0, $zero, 0x70E
    ctx->pc = 0x1fc21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1806));
    // 0x1fc220: 0xc080052  jal         func_200148
    ctx->pc = 0x1FC220u;
    SET_GPR_U32(ctx, 31, 0x1FC228u);
    ctx->pc = 0x1FC224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC220u;
    // 0x1fc224: 0x24a5c060  addiu       $a1, $a1, -0x3FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1FC220u, 0x1FC228u)) {
        return;
    }
    ctx->pc = 0x1FC228u;
label_1fc228:
    // 0x1fc228: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fc228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1fc22c: 0x2404071a  addiu       $a0, $zero, 0x71A
    ctx->pc = 0x1fc22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1818));
    // 0x1fc230: 0xc080052  jal         func_200148
    ctx->pc = 0x1FC230u;
    SET_GPR_U32(ctx, 31, 0x1FC238u);
    ctx->pc = 0x1FC234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC230u;
    // 0x1fc234: 0x24a5c190  addiu       $a1, $a1, -0x3E70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1FC230u, 0x1FC238u)) {
        return;
    }
    ctx->pc = 0x1FC238u;
label_1fc238:
    // 0x1fc238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fc238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc23c: 0xc080052  jal         func_200148
    ctx->pc = 0x1FC23Cu;
    SET_GPR_U32(ctx, 31, 0x1FC244u);
    ctx->pc = 0x1FC240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC23Cu;
    // 0x1fc240: 0x2404071b  addiu       $a0, $zero, 0x71B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1819));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1FC23Cu, 0x1FC244u)) {
        return;
    }
    ctx->pc = 0x1FC244u;
label_1fc244:
    // 0x1fc244: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fc244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc24c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC24Cu;
        // 0x1fc250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC254u;
    // 0x1fc254: 0x0  nop
    ctx->pc = 0x1fc254u;
    // NOP
    // 0x1fc258: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fc258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fc25c: 0x0  nop
    ctx->pc = 0x1fc25cu;
    // NOP
    ctx->pc = 0x1fc260u;
}
