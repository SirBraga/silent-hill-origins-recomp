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

// Function: sub_00264E90
// Address: 0x264e90 - 0x264f10
void sub_00264E90_0x264e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264E90_0x264e90");
#endif

    switch (ctx->pc) {
        case 0x264e90u: goto label_264e90;
        case 0x264e94u: goto label_264e94;
        case 0x264e98u: goto label_264e98;
        case 0x264e9cu: goto label_264e9c;
        case 0x264ea0u: goto label_264ea0;
        case 0x264ea4u: goto label_264ea4;
        case 0x264ea8u: goto label_264ea8;
        case 0x264eacu: goto label_264eac;
        case 0x264eb0u: goto label_264eb0;
        case 0x264eb4u: goto label_264eb4;
        case 0x264eb8u: goto label_264eb8;
        case 0x264ebcu: goto label_264ebc;
        case 0x264ec0u: goto label_264ec0;
        case 0x264ec4u: goto label_264ec4;
        case 0x264ec8u: goto label_264ec8;
        case 0x264eccu: goto label_264ecc;
        case 0x264ed0u: goto label_264ed0;
        case 0x264ed4u: goto label_264ed4;
        case 0x264ed8u: goto label_264ed8;
        case 0x264edcu: goto label_264edc;
        case 0x264ee0u: goto label_264ee0;
        case 0x264ee4u: goto label_264ee4;
        case 0x264ee8u: goto label_264ee8;
        case 0x264eecu: goto label_264eec;
        case 0x264ef0u: goto label_264ef0;
        case 0x264ef4u: goto label_264ef4;
        case 0x264ef8u: goto label_264ef8;
        case 0x264efcu: goto label_264efc;
        case 0x264f00u: goto label_264f00;
        case 0x264f04u: goto label_264f04;
        case 0x264f08u: goto label_264f08;
        case 0x264f0cu: goto label_264f0c;
        default: break;
    }

    ctx->pc = 0x264e90u;

label_264e90:
    // 0x264e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_264e94:
    // 0x264e94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x264e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_264e98:
    // 0x264e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_264e9c:
    // 0x264e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_264ea0:
    // 0x264ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_264ea4:
    // 0x264ea4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x264ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_264ea8:
    // 0x264ea8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_264eac:
    if (ctx->pc == 0x264EACu) {
        ctx->pc = 0x264EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264EA8u;
        // 0x264eac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264EB0u;
        goto label_264eb0;
    }
    ctx->pc = 0x264EA8u;
    {
        const bool branch_taken_0x264ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264EA8u;
        // 0x264eac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ea8) {
            ctx->pc = 0x264EBCu;
            goto label_264ebc;
        }
    }
    ctx->pc = 0x264EB0u;
label_264eb0:
    // 0x264eb0: 0xc099376  jal         func_264DD8
label_264eb4:
    if (ctx->pc == 0x264EB4u) {
        ctx->pc = 0x264EB8u;
        goto label_264eb8;
    }
    ctx->pc = 0x264EB0u;
    SET_GPR_U32(ctx, 31, 0x264EB8u);
    ctx->pc = 0x264DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264DD8u, 0x264EB0u, 0x264EB8u)) {
        return;
    }
    ctx->pc = 0x264EB8u;
label_264eb8:
    // 0x264eb8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x264eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_264ebc:
    // 0x264ebc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x264ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_264ec0:
    // 0x264ec0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x264ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_264ec4:
    // 0x264ec4: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x264ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_264ec8:
    // 0x264ec8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x264ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_264ecc:
    // 0x264ecc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x264eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_264ed0:
    // 0x264ed0: 0x40f809  jalr        $v0
label_264ed4:
    if (ctx->pc == 0x264ED4u) {
        ctx->pc = 0x264ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264ED0u;
        // 0x264ed4: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x264ED8u;
        goto label_264ed8;
    }
    ctx->pc = 0x264ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264ED8u);
        ctx->pc = 0x264ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264ED0u;
        // 0x264ed4: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264ED0u, 0x264ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264ED8u;
label_264ed8:
    // 0x264ed8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_264edc:
    if (ctx->pc == 0x264EDCu) {
        ctx->pc = 0x264EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264ED8u;
        // 0x264edc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264EE0u;
        goto label_264ee0;
    }
    ctx->pc = 0x264ED8u;
    {
        const bool branch_taken_0x264ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264ED8u;
        // 0x264edc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ed8) {
            ctx->pc = 0x264EF8u;
            goto label_264ef8;
        }
    }
    ctx->pc = 0x264EE0u;
label_264ee0:
    // 0x264ee0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x264ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_264ee4:
    // 0x264ee4: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x264ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_264ee8:
    // 0x264ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264eec:
    // 0x264eec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x264eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_264ef0:
    // 0x264ef0: 0xc0c493d  jal         func_3124F4
label_264ef4:
    if (ctx->pc == 0x264EF4u) {
        ctx->pc = 0x264EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264EF0u;
        // 0x264ef4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264EF8u;
        goto label_264ef8;
    }
    ctx->pc = 0x264EF0u;
    SET_GPR_U32(ctx, 31, 0x264EF8u);
    ctx->pc = 0x264EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264EF0u;
    // 0x264ef4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x264EF0u, 0x264EF8u)) {
        return;
    }
    ctx->pc = 0x264EF8u;
label_264ef8:
    // 0x264ef8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x264ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264efc:
    // 0x264efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_264f00:
    // 0x264f00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x264f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_264f04:
    // 0x264f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264f08:
    // 0x264f08: 0x3e00008  jr          $ra
label_264f0c:
    if (ctx->pc == 0x264F0Cu) {
        ctx->pc = 0x264F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F08u;
        // 0x264f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264F10u;
        goto label_fallthrough_0x264f08;
    }
    ctx->pc = 0x264F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F08u;
        // 0x264f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x264f08:
    ctx->pc = 0x264F10u;
}
