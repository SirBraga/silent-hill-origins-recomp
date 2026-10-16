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

// Function: sub_002DF1F8
// Address: 0x2df1f8 - 0x2df240
void sub_002DF1F8_0x2df1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF1F8_0x2df1f8");
#endif

    switch (ctx->pc) {
        case 0x2df1f8u: goto label_2df1f8;
        case 0x2df1fcu: goto label_2df1fc;
        case 0x2df200u: goto label_2df200;
        case 0x2df204u: goto label_2df204;
        case 0x2df208u: goto label_2df208;
        case 0x2df20cu: goto label_2df20c;
        case 0x2df210u: goto label_2df210;
        case 0x2df214u: goto label_2df214;
        case 0x2df218u: goto label_2df218;
        case 0x2df21cu: goto label_2df21c;
        case 0x2df220u: goto label_2df220;
        case 0x2df224u: goto label_2df224;
        case 0x2df228u: goto label_2df228;
        case 0x2df22cu: goto label_2df22c;
        case 0x2df230u: goto label_2df230;
        case 0x2df234u: goto label_2df234;
        case 0x2df238u: goto label_2df238;
        case 0x2df23cu: goto label_2df23c;
        default: break;
    }

    ctx->pc = 0x2df1f8u;

label_2df1f8:
    // 0x2df1f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2df1fc:
    // 0x2df1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2df200:
    // 0x2df200: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2df200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2df204:
    // 0x2df204: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2df204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2df208:
    // 0x2df208: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2df20c:
    if (ctx->pc == 0x2DF20Cu) {
        ctx->pc = 0x2DF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF208u;
        // 0x2df20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF210u;
        goto label_2df210;
    }
    ctx->pc = 0x2DF208u;
    {
        const bool branch_taken_0x2df208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df208) {
            ctx->pc = 0x2DF20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF208u;
            // 0x2df20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF220u;
            goto label_2df220;
        }
    }
    ctx->pc = 0x2DF210u;
label_2df210:
    // 0x2df210: 0x40f809  jalr        $v0
label_2df214:
    if (ctx->pc == 0x2DF214u) {
        ctx->pc = 0x2DF218u;
        goto label_2df218;
    }
    ctx->pc = 0x2DF210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF210u, 0x2DF218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF218u;
label_2df218:
    // 0x2df218: 0x10000002  b           . + 4 + (0x2 << 2)
label_2df21c:
    if (ctx->pc == 0x2DF21Cu) {
        ctx->pc = 0x2DF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF218u;
        // 0x2df21c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF220u;
        goto label_2df220;
    }
    ctx->pc = 0x2DF218u;
    {
        const bool branch_taken_0x2df218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF218u;
        // 0x2df21c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df218) {
            ctx->pc = 0x2DF224u;
            goto label_2df224;
        }
    }
    ctx->pc = 0x2DF220u;
label_2df220:
    // 0x2df220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2df224:
    // 0x2df224: 0x3e00008  jr          $ra
label_2df228:
    if (ctx->pc == 0x2DF228u) {
        ctx->pc = 0x2DF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF224u;
        // 0x2df228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF22Cu;
        goto label_2df22c;
    }
    ctx->pc = 0x2DF224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF224u;
        // 0x2df228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF22Cu;
label_2df22c:
    // 0x2df22c: 0x0  nop
    ctx->pc = 0x2df22cu;
    // NOP
label_2df230:
    // 0x2df230: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2df230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2df234:
    // 0x2df234: 0x0  nop
    ctx->pc = 0x2df234u;
    // NOP
label_2df238:
    // 0x2df238: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x2df238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_2df23c:
    // 0x2df23c: 0x0  nop
    ctx->pc = 0x2df23cu;
    // NOP
    ctx->pc = 0x2df240u;
}
