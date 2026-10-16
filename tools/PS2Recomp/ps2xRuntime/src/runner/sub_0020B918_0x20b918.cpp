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

// Function: sub_0020B918
// Address: 0x20b918 - 0x20b978
void sub_0020B918_0x20b918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B918_0x20b918");
#endif

    switch (ctx->pc) {
        case 0x20b918u: goto label_20b918;
        case 0x20b91cu: goto label_20b91c;
        case 0x20b920u: goto label_20b920;
        case 0x20b924u: goto label_20b924;
        case 0x20b928u: goto label_20b928;
        case 0x20b92cu: goto label_20b92c;
        case 0x20b930u: goto label_20b930;
        case 0x20b934u: goto label_20b934;
        case 0x20b938u: goto label_20b938;
        case 0x20b93cu: goto label_20b93c;
        case 0x20b940u: goto label_20b940;
        case 0x20b944u: goto label_20b944;
        case 0x20b948u: goto label_20b948;
        case 0x20b94cu: goto label_20b94c;
        case 0x20b950u: goto label_20b950;
        case 0x20b954u: goto label_20b954;
        case 0x20b958u: goto label_20b958;
        case 0x20b95cu: goto label_20b95c;
        case 0x20b960u: goto label_20b960;
        case 0x20b964u: goto label_20b964;
        case 0x20b968u: goto label_20b968;
        case 0x20b96cu: goto label_20b96c;
        case 0x20b970u: goto label_20b970;
        case 0x20b974u: goto label_20b974;
        default: break;
    }

    ctx->pc = 0x20b918u;

label_20b918:
    // 0x20b918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20b91c:
    // 0x20b91c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20b91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20b920:
    // 0x20b920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20b924:
    // 0x20b924: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x20b924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20b928:
    // 0x20b928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b92c:
    // 0x20b92c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20b92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20b930:
    // 0x20b930: 0x8c8201c4  lw          $v0, 0x1C4($a0)
    ctx->pc = 0x20b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
label_20b934:
    // 0x20b934: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x20b934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20b938:
    // 0x20b938: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20b938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20b93c:
    // 0x20b93c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x20b93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20b940:
    // 0x20b940: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x20b940u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20b944:
    // 0x20b944: 0x60f809  jalr        $v1
label_20b948:
    if (ctx->pc == 0x20B948u) {
        ctx->pc = 0x20B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B944u;
        // 0x20b948: 0x1073821  addu        $a3, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B94Cu;
        goto label_20b94c;
    }
    ctx->pc = 0x20B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B94Cu);
        ctx->pc = 0x20B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B944u;
        // 0x20b948: 0x1073821  addu        $a3, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B944u, 0x20B94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B94Cu;
label_20b94c:
    // 0x20b94c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20b950:
    // 0x20b950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b954:
    // 0x20b954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20b958:
    // 0x20b958: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20b958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20b95c:
    // 0x20b95c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20b95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b960:
    // 0x20b960: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20b960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20b964:
    // 0x20b964: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20b964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20b968:
    // 0x20b968: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20b968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_20b96c:
    // 0x20b96c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b970:
    // 0x20b970: 0x3e00008  jr          $ra
label_20b974:
    if (ctx->pc == 0x20B974u) {
        ctx->pc = 0x20B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B970u;
        // 0x20b974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B978u;
        goto label_fallthrough_0x20b970;
    }
    ctx->pc = 0x20B970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B970u;
        // 0x20b974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b970:
    ctx->pc = 0x20B978u;
}
