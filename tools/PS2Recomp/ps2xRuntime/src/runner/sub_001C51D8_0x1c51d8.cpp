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

// Function: sub_001C51D8
// Address: 0x1c51d8 - 0x1c5220
void sub_001C51D8_0x1c51d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C51D8_0x1c51d8");
#endif

    switch (ctx->pc) {
        case 0x1c51d8u: goto label_1c51d8;
        case 0x1c51dcu: goto label_1c51dc;
        case 0x1c51e0u: goto label_1c51e0;
        case 0x1c51e4u: goto label_1c51e4;
        case 0x1c51e8u: goto label_1c51e8;
        case 0x1c51ecu: goto label_1c51ec;
        case 0x1c51f0u: goto label_1c51f0;
        case 0x1c51f4u: goto label_1c51f4;
        case 0x1c51f8u: goto label_1c51f8;
        case 0x1c51fcu: goto label_1c51fc;
        case 0x1c5200u: goto label_1c5200;
        case 0x1c5204u: goto label_1c5204;
        case 0x1c5208u: goto label_1c5208;
        case 0x1c520cu: goto label_1c520c;
        case 0x1c5210u: goto label_1c5210;
        case 0x1c5214u: goto label_1c5214;
        case 0x1c5218u: goto label_1c5218;
        case 0x1c521cu: goto label_1c521c;
        default: break;
    }

    ctx->pc = 0x1c51d8u;

label_1c51d8:
    // 0x1c51d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c51dc:
    // 0x1c51dc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c51dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1c51e0:
    // 0x1c51e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c51e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c51e4:
    // 0x1c51e4: 0x24639878  addiu       $v1, $v1, -0x6788
    ctx->pc = 0x1c51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940792));
label_1c51e8:
    // 0x1c51e8: 0x8c8602d0  lw          $a2, 0x2D0($a0)
    ctx->pc = 0x1c51e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_1c51ec:
    // 0x1c51ec: 0x8c8202d8  lw          $v0, 0x2D8($a0)
    ctx->pc = 0x1c51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
label_1c51f0:
    // 0x1c51f0: 0x8cc50258  lw          $a1, 0x258($a2)
    ctx->pc = 0x1c51f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c51f4:
    // 0x1c51f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c51f8:
    // 0x1c51f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c51fc:
    // 0x1c51fc: 0x84a400e0  lh          $a0, 0xE0($a1)
    ctx->pc = 0x1c51fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 224)));
label_1c5200:
    // 0x1c5200: 0x8ca300e4  lw          $v1, 0xE4($a1)
    ctx->pc = 0x1c5200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
label_1c5204:
    // 0x1c5204: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c5204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5208:
    // 0x1c5208: 0x60f809  jalr        $v1
label_1c520c:
    if (ctx->pc == 0x1C520Cu) {
        ctx->pc = 0x1C520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5208u;
        // 0x1c520c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5210u;
        goto label_1c5210;
    }
    ctx->pc = 0x1C5208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C5210u);
        ctx->pc = 0x1C520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5208u;
        // 0x1c520c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5208u, 0x1C5210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5210u;
label_1c5210:
    // 0x1c5210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5214:
    // 0x1c5214: 0x3e00008  jr          $ra
label_1c5218:
    if (ctx->pc == 0x1C5218u) {
        ctx->pc = 0x1C5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5214u;
        // 0x1c5218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C521Cu;
        goto label_1c521c;
    }
    ctx->pc = 0x1C5214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5214u;
        // 0x1c5218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C521Cu;
label_1c521c:
    // 0x1c521c: 0x0  nop
    ctx->pc = 0x1c521cu;
    // NOP
    ctx->pc = 0x1c5220u;
}
