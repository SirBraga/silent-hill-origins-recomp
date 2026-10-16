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

// Function: sub_001721B8
// Address: 0x1721b8 - 0x172220
void sub_001721B8_0x1721b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001721B8_0x1721b8");
#endif

    switch (ctx->pc) {
        case 0x1721b8u: goto label_1721b8;
        case 0x1721bcu: goto label_1721bc;
        case 0x1721c0u: goto label_1721c0;
        case 0x1721c4u: goto label_1721c4;
        case 0x1721c8u: goto label_1721c8;
        case 0x1721ccu: goto label_1721cc;
        case 0x1721d0u: goto label_1721d0;
        case 0x1721d4u: goto label_1721d4;
        case 0x1721d8u: goto label_1721d8;
        case 0x1721dcu: goto label_1721dc;
        case 0x1721e0u: goto label_1721e0;
        case 0x1721e4u: goto label_1721e4;
        case 0x1721e8u: goto label_1721e8;
        case 0x1721ecu: goto label_1721ec;
        case 0x1721f0u: goto label_1721f0;
        case 0x1721f4u: goto label_1721f4;
        case 0x1721f8u: goto label_1721f8;
        case 0x1721fcu: goto label_1721fc;
        case 0x172200u: goto label_172200;
        case 0x172204u: goto label_172204;
        case 0x172208u: goto label_172208;
        case 0x17220cu: goto label_17220c;
        case 0x172210u: goto label_172210;
        case 0x172214u: goto label_172214;
        case 0x172218u: goto label_172218;
        case 0x17221cu: goto label_17221c;
        default: break;
    }

    ctx->pc = 0x1721b8u;

label_1721b8:
    // 0x1721b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1721b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1721bc:
    // 0x1721bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1721bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1721c0:
    // 0x1721c0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1721c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1721c4:
    // 0x1721c4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1721c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1721c8:
    // 0x1721c8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1721cc:
    if (ctx->pc == 0x1721CCu) {
        ctx->pc = 0x1721CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721C8u;
        // 0x1721cc: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1721D0u;
        goto label_1721d0;
    }
    ctx->pc = 0x1721C8u;
    {
        const bool branch_taken_0x1721c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1721c8) {
            ctx->pc = 0x1721CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1721C8u;
            // 0x1721cc: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1721F0u;
            goto label_1721f0;
        }
    }
    ctx->pc = 0x1721D0u;
label_1721d0:
    // 0x1721d0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1721d4:
    if (ctx->pc == 0x1721D4u) {
        ctx->pc = 0x1721D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721D0u;
        // 0x1721d4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1721D8u;
        goto label_1721d8;
    }
    ctx->pc = 0x1721D0u;
    {
        const bool branch_taken_0x1721d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1721D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721D0u;
        // 0x1721d4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721d0) {
            ctx->pc = 0x1721ECu;
            goto label_1721ec;
        }
    }
    ctx->pc = 0x1721D8u;
label_1721d8:
    // 0x1721d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1721d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1721dc:
    // 0x1721dc: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1721dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_1721e0:
    // 0x1721e0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1721e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1721e4:
    // 0x1721e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1721e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1721e8:
    // 0x1721e8: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x1721e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_1721ec:
    // 0x1721ec: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1721ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1721f0:
    // 0x1721f0: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x1721f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_1721f4:
    // 0x1721f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1721f8:
    if (ctx->pc == 0x1721F8u) {
        ctx->pc = 0x1721F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721F4u;
        // 0x1721f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1721FCu;
        goto label_1721fc;
    }
    ctx->pc = 0x1721F4u;
    {
        const bool branch_taken_0x1721f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1721F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721F4u;
        // 0x1721f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721f4) {
            ctx->pc = 0x172214u;
            goto label_172214;
        }
    }
    ctx->pc = 0x1721FCu;
label_1721fc:
    // 0x1721fc: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1721fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_172200:
    // 0x172200: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x172200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_172204:
    // 0x172204: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x172204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_172208:
    // 0x172208: 0x60f809  jalr        $v1
label_17220c:
    if (ctx->pc == 0x17220Cu) {
        ctx->pc = 0x17220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172208u;
        // 0x17220c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172210u;
        goto label_172210;
    }
    ctx->pc = 0x172208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x172210u);
        ctx->pc = 0x17220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172208u;
        // 0x17220c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172208u, 0x172210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172210u;
label_172210:
    // 0x172210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172214:
    // 0x172214: 0x3e00008  jr          $ra
label_172218:
    if (ctx->pc == 0x172218u) {
        ctx->pc = 0x172218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172214u;
        // 0x172218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17221Cu;
        goto label_17221c;
    }
    ctx->pc = 0x172214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172214u;
        // 0x172218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17221Cu;
label_17221c:
    // 0x17221c: 0x0  nop
    ctx->pc = 0x17221cu;
    // NOP
    ctx->pc = 0x172220u;
}
