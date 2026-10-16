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

// Function: sub_00196E60
// Address: 0x196e60 - 0x196f00
void sub_00196E60_0x196e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196E60_0x196e60");
#endif

    switch (ctx->pc) {
        case 0x196e88u: goto label_196e88;
        case 0x196e98u: goto label_196e98;
        case 0x196ea8u: goto label_196ea8;
        case 0x196eb4u: goto label_196eb4;
        case 0x196ee0u: goto label_196ee0;
        default: break;
    }

    ctx->pc = 0x196e60u;

    // 0x196e60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x196e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x196e64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x196e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196e68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x196e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x196e6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x196e70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x196e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x196e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x196e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x196e7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x196e80: 0xc093546  jal         func_24D518
    ctx->pc = 0x196E80u;
    SET_GPR_U32(ctx, 31, 0x196E88u);
    ctx->pc = 0x196E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E80u;
    // 0x196e84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x196E80u, 0x196E88u)) {
        return;
    }
    ctx->pc = 0x196E88u;
label_196e88:
    // 0x196e88: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x196e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x196e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e90: 0xc093546  jal         func_24D518
    ctx->pc = 0x196E90u;
    SET_GPR_U32(ctx, 31, 0x196E98u);
    ctx->pc = 0x196E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E90u;
    // 0x196e94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x196E90u, 0x196E98u)) {
        return;
    }
    ctx->pc = 0x196E98u;
label_196e98:
    // 0x196e98: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x196e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x196e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ea0: 0xc093546  jal         func_24D518
    ctx->pc = 0x196EA0u;
    SET_GPR_U32(ctx, 31, 0x196EA8u);
    ctx->pc = 0x196EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196EA0u;
    // 0x196ea4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x196EA0u, 0x196EA8u)) {
        return;
    }
    ctx->pc = 0x196EA8u;
label_196ea8:
    // 0x196ea8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x196ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x196eac: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x196EACu;
    SET_GPR_U32(ctx, 31, 0x196EB4u);
    ctx->pc = 0x196EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196EACu;
    // 0x196eb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x196EACu, 0x196EB4u)) {
        return;
    }
    ctx->pc = 0x196EB4u;
label_196eb4:
    // 0x196eb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196eb8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x196eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196ebc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x196ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x196ec0: 0x3c024d49  lui         $v0, 0x4D49
    ctx->pc = 0x196ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19785 << 16));
    // 0x196ec4: 0xac708bc0  sw          $s0, -0x7440($v1)
    ctx->pc = 0x196ec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x338BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338BC0u, _value); } while (0);
    // 0x196ec8: 0x34424e41  ori         $v0, $v0, 0x4E41
    ctx->pc = 0x196ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20033);
    // 0x196ecc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x196eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x196ed0: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196ED0u;
    {
        const bool branch_taken_0x196ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x196ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196ED0u;
        // 0x196ed4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ed0) {
            ctx->pc = 0x196EE4u;
            goto label_196ee4;
        }
    }
    ctx->pc = 0x196ED8u;
    // 0x196ed8: 0xc068376  jal         func_1A0DD8
    ctx->pc = 0x196ED8u;
    SET_GPR_U32(ctx, 31, 0x196EE0u);
    ctx->pc = 0x196EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196ED8u;
    // 0x196edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0DD8u, 0x196ED8u, 0x196EE0u)) {
        return;
    }
    ctx->pc = 0x196EE0u;
label_196ee0:
    // 0x196ee0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x196ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_196ee4:
    // 0x196ee4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x196ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ee8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x196ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196eec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x196eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196ef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x196EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EF8u;
        // 0x196efc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196F00u;
}
