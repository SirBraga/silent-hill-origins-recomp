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

// Function: sub_00208168
// Address: 0x208168 - 0x2081e0
void sub_00208168_0x208168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208168_0x208168");
#endif

    switch (ctx->pc) {
        case 0x208168u: goto label_208168;
        case 0x20816cu: goto label_20816c;
        case 0x208170u: goto label_208170;
        case 0x208174u: goto label_208174;
        case 0x208178u: goto label_208178;
        case 0x20817cu: goto label_20817c;
        case 0x208180u: goto label_208180;
        case 0x208184u: goto label_208184;
        case 0x208188u: goto label_208188;
        case 0x20818cu: goto label_20818c;
        case 0x208190u: goto label_208190;
        case 0x208194u: goto label_208194;
        case 0x208198u: goto label_208198;
        case 0x20819cu: goto label_20819c;
        case 0x2081a0u: goto label_2081a0;
        case 0x2081a4u: goto label_2081a4;
        case 0x2081a8u: goto label_2081a8;
        case 0x2081acu: goto label_2081ac;
        case 0x2081b0u: goto label_2081b0;
        case 0x2081b4u: goto label_2081b4;
        case 0x2081b8u: goto label_2081b8;
        case 0x2081bcu: goto label_2081bc;
        case 0x2081c0u: goto label_2081c0;
        case 0x2081c4u: goto label_2081c4;
        case 0x2081c8u: goto label_2081c8;
        case 0x2081ccu: goto label_2081cc;
        case 0x2081d0u: goto label_2081d0;
        case 0x2081d4u: goto label_2081d4;
        case 0x2081d8u: goto label_2081d8;
        case 0x2081dcu: goto label_2081dc;
        default: break;
    }

    ctx->pc = 0x208168u;

label_208168:
    // 0x208168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20816c:
    // 0x20816c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20816cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208170:
    // 0x208170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x208170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_208174:
    // 0x208174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208178:
    // 0x208178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20817c:
    // 0x20817c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_208180:
    // 0x208180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x208180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208184:
    // 0x208184: 0x40f809  jalr        $v0
label_208188:
    if (ctx->pc == 0x208188u) {
        ctx->pc = 0x208188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208184u;
        // 0x208188: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20818Cu;
        goto label_20818c;
    }
    ctx->pc = 0x208184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20818Cu);
        ctx->pc = 0x208188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208184u;
        // 0x208188: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208184u, 0x20818Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20818Cu;
label_20818c:
    // 0x20818c: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x20818cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
label_208190:
    // 0x208190: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x208190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
label_208194:
    // 0x208194: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x208194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_208198:
    // 0x208198: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x208198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
label_20819c:
    // 0x20819c: 0x3c070021  lui         $a3, 0x21
    ctx->pc = 0x20819cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33 << 16));
label_2081a0:
    // 0x2081a0: 0x248481e0  addiu       $a0, $a0, -0x7E20
    ctx->pc = 0x2081a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
label_2081a4:
    // 0x2081a4: 0x24a58318  addiu       $a1, $a1, -0x7CE8
    ctx->pc = 0x2081a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935320));
label_2081a8:
    // 0x2081a8: 0x24c67f80  addiu       $a2, $a2, 0x7F80
    ctx->pc = 0x2081a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32640));
label_2081ac:
    // 0x2081ac: 0x24e78300  addiu       $a3, $a3, -0x7D00
    ctx->pc = 0x2081acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935296));
label_2081b0:
    // 0x2081b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2081b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2081b4:
    // 0x2081b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2081b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2081b8:
    // 0x2081b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2081b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2081bc:
    // 0x2081bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2081bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2081c0:
    // 0x2081c0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2081c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_2081c4:
    // 0x2081c4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2081c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_2081c8:
    // 0x2081c8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2081c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_2081cc:
    // 0x2081cc: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x2081ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
label_2081d0:
    // 0x2081d0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2081d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_2081d4:
    // 0x2081d4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2081d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_2081d8:
    // 0x2081d8: 0x3e00008  jr          $ra
label_2081dc:
    if (ctx->pc == 0x2081DCu) {
        ctx->pc = 0x2081DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081D8u;
        // 0x2081dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2081E0u;
        goto label_fallthrough_0x2081d8;
    }
    ctx->pc = 0x2081D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2081DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081D8u;
        // 0x2081dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2081D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2081d8:
    ctx->pc = 0x2081E0u;
}
