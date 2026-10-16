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

// Function: sub_0025D100
// Address: 0x25d100 - 0x25d148
void sub_0025D100_0x25d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D100_0x25d100");
#endif

    switch (ctx->pc) {
        case 0x25d100u: goto label_25d100;
        case 0x25d104u: goto label_25d104;
        case 0x25d108u: goto label_25d108;
        case 0x25d10cu: goto label_25d10c;
        case 0x25d110u: goto label_25d110;
        case 0x25d114u: goto label_25d114;
        case 0x25d118u: goto label_25d118;
        case 0x25d11cu: goto label_25d11c;
        case 0x25d120u: goto label_25d120;
        case 0x25d124u: goto label_25d124;
        case 0x25d128u: goto label_25d128;
        case 0x25d12cu: goto label_25d12c;
        case 0x25d130u: goto label_25d130;
        case 0x25d134u: goto label_25d134;
        case 0x25d138u: goto label_25d138;
        case 0x25d13cu: goto label_25d13c;
        case 0x25d140u: goto label_25d140;
        case 0x25d144u: goto label_25d144;
        default: break;
    }

    ctx->pc = 0x25d100u;

label_25d100:
    // 0x25d100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25d100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25d104:
    // 0x25d104: 0x8f8585f8  lw          $a1, -0x7A08($gp)
    ctx->pc = 0x25d104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
label_25d108:
    // 0x25d108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25d10c:
    // 0x25d10c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25d110:
    // 0x25d110: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25d110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25d114:
    // 0x25d114: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x25d114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_25d118:
    // 0x25d118: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x25d118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_25d11c:
    // 0x25d11c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x25d11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_25d120:
    // 0x25d120: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25d124:
    // 0x25d124: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x25d124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
label_25d128:
    // 0x25d128: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x25d128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_25d12c:
    // 0x25d12c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x25d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_25d130:
    // 0x25d130: 0x40f809  jalr        $v0
label_25d134:
    if (ctx->pc == 0x25D134u) {
        ctx->pc = 0x25D138u;
        goto label_25d138;
    }
    ctx->pc = 0x25D130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D138u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D130u, 0x25D138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D138u;
label_25d138:
    // 0x25d138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25d13c:
    // 0x25d13c: 0x3e00008  jr          $ra
label_25d140:
    if (ctx->pc == 0x25D140u) {
        ctx->pc = 0x25D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D13Cu;
        // 0x25d140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D144u;
        goto label_25d144;
    }
    ctx->pc = 0x25D13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D13Cu;
        // 0x25d140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D144u;
label_25d144:
    // 0x25d144: 0x0  nop
    ctx->pc = 0x25d144u;
    // NOP
    ctx->pc = 0x25d148u;
}
