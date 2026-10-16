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

// Function: sub_00226E58
// Address: 0x226e58 - 0x226ec8
void sub_00226E58_0x226e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226E58_0x226e58");
#endif

    switch (ctx->pc) {
        case 0x226e58u: goto label_226e58;
        case 0x226e5cu: goto label_226e5c;
        case 0x226e60u: goto label_226e60;
        case 0x226e64u: goto label_226e64;
        case 0x226e68u: goto label_226e68;
        case 0x226e6cu: goto label_226e6c;
        case 0x226e70u: goto label_226e70;
        case 0x226e74u: goto label_226e74;
        case 0x226e78u: goto label_226e78;
        case 0x226e7cu: goto label_226e7c;
        case 0x226e80u: goto label_226e80;
        case 0x226e84u: goto label_226e84;
        case 0x226e88u: goto label_226e88;
        case 0x226e8cu: goto label_226e8c;
        case 0x226e90u: goto label_226e90;
        case 0x226e94u: goto label_226e94;
        case 0x226e98u: goto label_226e98;
        case 0x226e9cu: goto label_226e9c;
        case 0x226ea0u: goto label_226ea0;
        case 0x226ea4u: goto label_226ea4;
        case 0x226ea8u: goto label_226ea8;
        case 0x226eacu: goto label_226eac;
        case 0x226eb0u: goto label_226eb0;
        case 0x226eb4u: goto label_226eb4;
        case 0x226eb8u: goto label_226eb8;
        case 0x226ebcu: goto label_226ebc;
        case 0x226ec0u: goto label_226ec0;
        case 0x226ec4u: goto label_226ec4;
        default: break;
    }

    ctx->pc = 0x226e58u;

label_226e58:
    // 0x226e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_226e5c:
    // 0x226e5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_226e60:
    // 0x226e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226e64:
    // 0x226e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226e68:
    // 0x226e68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x226e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_226e6c:
    // 0x226e6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x226e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_226e70:
    // 0x226e70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_226e74:
    if (ctx->pc == 0x226E74u) {
        ctx->pc = 0x226E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E70u;
        // 0x226e74: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E78u;
        goto label_226e78;
    }
    ctx->pc = 0x226E70u;
    {
        const bool branch_taken_0x226e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226e70) {
            ctx->pc = 0x226E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226E70u;
            // 0x226e74: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226E84u;
            goto label_226e84;
        }
    }
    ctx->pc = 0x226E78u;
label_226e78:
    // 0x226e78: 0xc089bf6  jal         func_226FD8
label_226e7c:
    if (ctx->pc == 0x226E7Cu) {
        ctx->pc = 0x226E80u;
        goto label_226e80;
    }
    ctx->pc = 0x226E78u;
    SET_GPR_U32(ctx, 31, 0x226E80u);
    ctx->pc = 0x226FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226FD8u, 0x226E78u, 0x226E80u)) {
        return;
    }
    ctx->pc = 0x226E80u;
label_226e80:
    // 0x226e80: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x226e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_226e84:
    // 0x226e84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226e88:
    // 0x226e88: 0xc09397e  jal         func_24E5F8
label_226e8c:
    if (ctx->pc == 0x226E8Cu) {
        ctx->pc = 0x226E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E88u;
        // 0x226e8c: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E90u;
        goto label_226e90;
    }
    ctx->pc = 0x226E88u;
    SET_GPR_U32(ctx, 31, 0x226E90u);
    ctx->pc = 0x226E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E88u;
    // 0x226e8c: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x226E88u, 0x226E90u)) {
        return;
    }
    ctx->pc = 0x226E90u;
label_226e90:
    // 0x226e90: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x226e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_226e94:
    // 0x226e94: 0x8cc63e90  lw          $a2, 0x3E90($a2)
    ctx->pc = 0x226e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16016)));
label_226e98:
    // 0x226e98: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x226e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_226e9c:
    // 0x226e9c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x226e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_226ea0:
    // 0x226ea0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226ea4:
    // 0x226ea4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x226ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_226ea8:
    // 0x226ea8: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x226ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_226eac:
    // 0x226eac: 0x40f809  jalr        $v0
label_226eb0:
    if (ctx->pc == 0x226EB0u) {
        ctx->pc = 0x226EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EACu;
        // 0x226eb0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EB4u;
        goto label_226eb4;
    }
    ctx->pc = 0x226EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226EB4u);
        ctx->pc = 0x226EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EACu;
        // 0x226eb0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226EACu, 0x226EB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226EB4u;
label_226eb4:
    // 0x226eb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226eb8:
    // 0x226eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226ebc:
    // 0x226ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226ec0:
    // 0x226ec0: 0x3e00008  jr          $ra
label_226ec4:
    if (ctx->pc == 0x226EC4u) {
        ctx->pc = 0x226EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EC0u;
        // 0x226ec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EC8u;
        goto label_fallthrough_0x226ec0;
    }
    ctx->pc = 0x226EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EC0u;
        // 0x226ec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x226ec0:
    ctx->pc = 0x226EC8u;
}
