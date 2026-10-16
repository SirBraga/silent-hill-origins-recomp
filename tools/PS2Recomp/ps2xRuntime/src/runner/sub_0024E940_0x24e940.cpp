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

// Function: sub_0024E940
// Address: 0x24e940 - 0x24e998
void sub_0024E940_0x24e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E940_0x24e940");
#endif

    ctx->pc = 0x24e940u;

    // 0x24e940: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E940u;
    {
        const bool branch_taken_0x24e940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E940u;
        // 0x24e944: 0x8f838f10  lw          $v1, -0x70F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e940) {
            ctx->pc = 0x24E950u;
            goto label_24e950;
        }
    }
    ctx->pc = 0x24E948u;
    // 0x24e948: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24e948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x24e94c: 0x2444e788  addiu       $a0, $v0, -0x1878
    ctx->pc = 0x24e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961032));
label_24e950:
    // 0x24e950: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24e954: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24e958: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e95c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E95Cu;
    {
        const bool branch_taken_0x24e95c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E95Cu;
        // 0x24e960: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e95c) {
            ctx->pc = 0x24E96Cu;
            goto label_24e96c;
        }
    }
    ctx->pc = 0x24E964u;
    // 0x24e964: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24e964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x24e968: 0x2445e6d0  addiu       $a1, $v0, -0x1930
    ctx->pc = 0x24e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960848));
label_24e96c:
    // 0x24e96c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E96Cu;
    {
        const bool branch_taken_0x24e96c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E96Cu;
        // 0x24e970: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e96c) {
            ctx->pc = 0x24E97Cu;
            goto label_24e97c;
        }
    }
    ctx->pc = 0x24E974u;
    // 0x24e974: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24e974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x24e978: 0x2446e8c0  addiu       $a2, $v0, -0x1740
    ctx->pc = 0x24e978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
label_24e97c:
    // 0x24e97c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E97Cu;
    {
        const bool branch_taken_0x24e97c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E97Cu;
        // 0x24e980: 0xac660010  sw          $a2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e97c) {
            ctx->pc = 0x24E98Cu;
            goto label_24e98c;
        }
    }
    ctx->pc = 0x24E984u;
    // 0x24e984: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24e984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x24e988: 0x2447e820  addiu       $a3, $v0, -0x17E0
    ctx->pc = 0x24e988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961184));
label_24e98c:
    // 0x24e98c: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x24e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x24e990: 0x3e00008  jr          $ra
    ctx->pc = 0x24E990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E990u;
        // 0x24e994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E998u;
}
