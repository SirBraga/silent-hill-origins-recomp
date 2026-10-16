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

// Function: sub_00149C98
// Address: 0x149c98 - 0x149d30
void sub_00149C98_0x149c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149C98_0x149c98");
#endif

    switch (ctx->pc) {
        case 0x149cb4u: goto label_149cb4;
        case 0x149ce8u: goto label_149ce8;
        case 0x149d1cu: goto label_149d1c;
        default: break;
    }

    ctx->pc = 0x149c98u;

    // 0x149c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149c9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x149c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x149ca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149ca4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x149ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149cac: 0xc0525e0  jal         func_149780
    ctx->pc = 0x149CACu;
    SET_GPR_U32(ctx, 31, 0x149CB4u);
    ctx->pc = 0x149CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CACu;
    // 0x149cb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149780u, 0x149CACu, 0x149CB4u)) {
        return;
    }
    ctx->pc = 0x149CB4u;
label_149cb4:
    // 0x149cb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149cb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x149cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149cbc: 0x8c43f898  lw          $v1, -0x768($v0)
    ctx->pc = 0x149cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF898u));
    // 0x149cc0: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x149CC0u;
    {
        const bool branch_taken_0x149cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x149CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CC0u;
        // 0x149cc4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149cc0) {
            ctx->pc = 0x149CF0u;
            goto label_149cf0;
        }
    }
    ctx->pc = 0x149CC8u;
    // 0x149cc8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x149cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x149ccc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x149CCCu;
    {
        const bool branch_taken_0x149ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ccc) {
            ctx->pc = 0x149CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149CCCu;
            // 0x149cd0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149CF0u;
            goto label_149cf0;
        }
    }
    ctx->pc = 0x149CD4u;
    // 0x149cd4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x149cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149cd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149CD8u;
    {
        const bool branch_taken_0x149cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CD8u;
        // 0x149cdc: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149cd8) {
            ctx->pc = 0x149CECu;
            goto label_149cec;
        }
    }
    ctx->pc = 0x149CE0u;
    // 0x149ce0: 0xc07f822  jal         func_1FE088
    ctx->pc = 0x149CE0u;
    SET_GPR_U32(ctx, 31, 0x149CE8u);
    ctx->pc = 0x149CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CE0u;
    // 0x149ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE088u, 0x149CE0u, 0x149CE8u)) {
        return;
    }
    ctx->pc = 0x149CE8u;
label_149ce8:
    // 0x149ce8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_149cec:
    // 0x149cec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x149cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_149cf0:
    // 0x149cf0: 0x8c43f8a0  lw          $v1, -0x760($v0)
    ctx->pc = 0x149cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965408)));
    // 0x149cf4: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x149CF4u;
    {
        const bool branch_taken_0x149cf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x149CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CF4u;
        // 0x149cf8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149cf4) {
            ctx->pc = 0x149D20u;
            goto label_149d20;
        }
    }
    ctx->pc = 0x149CFCu;
    // 0x149cfc: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x149cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x149d00: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149D00u;
    {
        const bool branch_taken_0x149d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D00u;
        // 0x149d04: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d00) {
            ctx->pc = 0x149D24u;
            goto label_149d24;
        }
    }
    ctx->pc = 0x149D08u;
    // 0x149d08: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x149d08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149D0Cu;
    {
        const bool branch_taken_0x149d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D0Cu;
        // 0x149d10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d0c) {
            ctx->pc = 0x149D28u;
            goto label_149d28;
        }
    }
    ctx->pc = 0x149D14u;
    // 0x149d14: 0xc07f846  jal         func_1FE118
    ctx->pc = 0x149D14u;
    SET_GPR_U32(ctx, 31, 0x149D1Cu);
    ctx->pc = 0x1FE118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE118u, 0x149D14u, 0x149D1Cu)) {
        return;
    }
    ctx->pc = 0x149D1Cu;
label_149d1c:
    // 0x149d1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x149d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_149d20:
    // 0x149d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_149d24:
    // 0x149d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_149d28:
    // 0x149d28: 0x3e00008  jr          $ra
    ctx->pc = 0x149D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D28u;
        // 0x149d2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149D30u;
}
