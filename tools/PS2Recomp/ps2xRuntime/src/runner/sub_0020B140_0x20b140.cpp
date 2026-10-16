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

// Function: sub_0020B140
// Address: 0x20b140 - 0x20b188
void sub_0020B140_0x20b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B140_0x20b140");
#endif

    switch (ctx->pc) {
        case 0x20b140u: goto label_20b140;
        case 0x20b144u: goto label_20b144;
        case 0x20b148u: goto label_20b148;
        case 0x20b14cu: goto label_20b14c;
        case 0x20b150u: goto label_20b150;
        case 0x20b154u: goto label_20b154;
        case 0x20b158u: goto label_20b158;
        case 0x20b15cu: goto label_20b15c;
        case 0x20b160u: goto label_20b160;
        case 0x20b164u: goto label_20b164;
        case 0x20b168u: goto label_20b168;
        case 0x20b16cu: goto label_20b16c;
        case 0x20b170u: goto label_20b170;
        case 0x20b174u: goto label_20b174;
        case 0x20b178u: goto label_20b178;
        case 0x20b17cu: goto label_20b17c;
        case 0x20b180u: goto label_20b180;
        case 0x20b184u: goto label_20b184;
        default: break;
    }

    ctx->pc = 0x20b140u;

label_20b140:
    // 0x20b140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20b144:
    // 0x20b144: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20b144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20b148:
    // 0x20b148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b14c:
    // 0x20b14c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_20b150:
    // 0x20b150: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20b154:
    if (ctx->pc == 0x20B154u) {
        ctx->pc = 0x20B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B150u;
        // 0x20b154: 0x8c9001a4  lw          $s0, 0x1A4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B158u;
        goto label_20b158;
    }
    ctx->pc = 0x20B150u;
    {
        const bool branch_taken_0x20b150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B150u;
        // 0x20b154: 0x8c9001a4  lw          $s0, 0x1A4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b150) {
            ctx->pc = 0x20B168u;
            goto label_20b168;
        }
    }
    ctx->pc = 0x20B158u;
label_20b158:
    // 0x20b158: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x20b158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
label_20b15c:
    // 0x20b15c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20b160:
    // 0x20b160: 0x40f809  jalr        $v0
label_20b164:
    if (ctx->pc == 0x20B164u) {
        ctx->pc = 0x20B168u;
        goto label_20b168;
    }
    ctx->pc = 0x20B160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B168u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B160u, 0x20B168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B168u;
label_20b168:
    // 0x20b168: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20b16c:
    // 0x20b16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b170:
    // 0x20b170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20b170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20b174:
    // 0x20b174: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x20b174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_20b178:
    // 0x20b178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20b178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b17c:
    // 0x20b17c: 0x3e00008  jr          $ra
label_20b180:
    if (ctx->pc == 0x20B180u) {
        ctx->pc = 0x20B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B17Cu;
        // 0x20b180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B184u;
        goto label_20b184;
    }
    ctx->pc = 0x20B17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B17Cu;
        // 0x20b180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B184u;
label_20b184:
    // 0x20b184: 0x0  nop
    ctx->pc = 0x20b184u;
    // NOP
    ctx->pc = 0x20b188u;
}
