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

// Function: sub_002E91A0
// Address: 0x2e91a0 - 0x2e9220
void sub_002E91A0_0x2e91a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E91A0_0x2e91a0");
#endif

    switch (ctx->pc) {
        case 0x2e920cu: goto label_2e920c;
        case 0x2e9214u: goto label_2e9214;
        default: break;
    }

    ctx->pc = 0x2e91a0u;

    // 0x2e91a0: 0x8f838c70  lw          $v1, -0x7390($gp)
    ctx->pc = 0x2e91a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937712)));
    // 0x2e91a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e91a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e91a8: 0x8f828c74  lw          $v0, -0x738C($gp)
    ctx->pc = 0x2e91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937716)));
    // 0x2e91ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e91acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e91b0: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2e91b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2e91b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e91b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e91b8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E91B8u;
    {
        const bool branch_taken_0x2e91b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91B8u;
        // 0x2e91bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91b8) {
            ctx->pc = 0x2E9214u;
            goto label_2e9214;
        }
    }
    ctx->pc = 0x2E91C0u;
    // 0x2e91c0: 0x8f848c74  lw          $a0, -0x738C($gp)
    ctx->pc = 0x2e91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937716)));
    // 0x2e91c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e91c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e91c8: 0x8f858c74  lw          $a1, -0x738C($gp)
    ctx->pc = 0x2e91c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937716)));
    // 0x2e91cc: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2e91ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x2e91d0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2e91d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e91d4: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2e91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2e91d8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2e91d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2e91dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e91dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e91e0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2e91e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2e91e4: 0xaf858c74  sw          $a1, -0x738C($gp)
    ctx->pc = 0x2e91e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 5));
    // 0x2e91e8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2e91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2e91ec: 0x24e79400  addiu       $a3, $a3, -0x6C00
    ctx->pc = 0x2e91ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939648));
    // 0x2e91f0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2e91f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e91f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e91f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e91f8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2e91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e91fc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e91fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e9200: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2e9200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e9204: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E9204u;
    SET_GPR_U32(ctx, 31, 0x2E920Cu);
    ctx->pc = 0x2E9208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9204u;
    // 0x2e9208: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E9204u, 0x2E920Cu)) {
        return;
    }
    ctx->pc = 0x2E920Cu;
label_2e920c:
    // 0x2e920c: 0xc0c84d4  jal         func_321350
    ctx->pc = 0x2E920Cu;
    SET_GPR_U32(ctx, 31, 0x2E9214u);
    ctx->pc = 0x2E9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E920Cu;
    // 0x2e9210: 0x8f849078  lw          $a0, -0x6F88($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321350u, 0x2E920Cu, 0x2E9214u)) {
        return;
    }
    ctx->pc = 0x2E9214u;
label_2e9214:
    // 0x2e9214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9218: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9218u;
        // 0x2e921c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9220u;
}
