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

// Function: sub_002F8C40
// Address: 0x2f8c40 - 0x2f8d10
void sub_002F8C40_0x2f8c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8C40_0x2f8c40");
#endif

    ctx->pc = 0x2f8c40u;

    // 0x2f8c40: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2f8c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2f8c44: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x2f8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x2f8c48: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x2f8c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x2f8c4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f8c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f8c50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x2f8c54: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x2f8c54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x2f8c58: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f8c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8c5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f8c60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f8c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f8c64: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2f8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2f8c68: 0x8ce3087c  lw          $v1, 0x87C($a3)
    ctx->pc = 0x2f8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2172)));
    // 0x2f8c6c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F8C6Cu;
    {
        const bool branch_taken_0x2f8c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C6Cu;
        // 0x2f8c70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c6c) {
            ctx->pc = 0x2F8CB4u;
            goto label_2f8cb4;
        }
    }
    ctx->pc = 0x2F8C74u;
    // 0x2f8c74: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2f8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2f8c78: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2f8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2f8c7c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x2f8c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2f8c80: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x2f8c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x2f8c84: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x2f8c84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x2f8c88: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x2f8c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x2f8c8c: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x2f8c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x2f8c90: 0x34841b00  ori         $a0, $a0, 0x1B00
    ctx->pc = 0x2f8c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6912);
    // 0x2f8c94: 0x34a53300  ori         $a1, $a1, 0x3300
    ctx->pc = 0x2f8c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13056);
    // 0x2f8c98: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x2f8c98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x2f8c9c: 0xace605a0  sw          $a2, 0x5A0($a3)
    ctx->pc = 0x2f8c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 6));
    // 0x2f8ca0: 0xace305a4  sw          $v1, 0x5A4($a3)
    ctx->pc = 0x2f8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 3));
    // 0x2f8ca4: 0xace406e0  sw          $a0, 0x6E0($a3)
    ctx->pc = 0x2f8ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 4));
    // 0x2f8ca8: 0xace506e4  sw          $a1, 0x6E4($a3)
    ctx->pc = 0x2f8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 5));
    // 0x2f8cac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CACu;
        // 0x2f8cb0: 0xace00820  sw          $zero, 0x820($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8CB4u;
label_2f8cb4:
    // 0x2f8cb4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F8CB4u;
    {
        const bool branch_taken_0x2f8cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CB4u;
        // 0x2f8cb8: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8cb4) {
            ctx->pc = 0x2F8D00u;
            goto label_2f8d00;
        }
    }
    ctx->pc = 0x2F8CBCu;
    // 0x2f8cbc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2f8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2f8cc0: 0x24e40880  addiu       $a0, $a3, 0x880
    ctx->pc = 0x2f8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2176));
    // 0x2f8cc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f8cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f8cc8: 0x24e30b80  addiu       $v1, $a3, 0xB80
    ctx->pc = 0x2f8cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2944));
    // 0x2f8ccc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f8cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f8cd0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2f8cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2f8cd4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x2f8cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x2f8cd8: 0x24e20e80  addiu       $v0, $a3, 0xE80
    ctx->pc = 0x2f8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x2f8cdc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2f8cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2f8ce0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2f8ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2f8ce4: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x2f8ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x2f8ce8: 0xace405a4  sw          $a0, 0x5A4($a3)
    ctx->pc = 0x2f8ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 4));
    // 0x2f8cec: 0xace306e4  sw          $v1, 0x6E4($a3)
    ctx->pc = 0x2f8cecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 3));
    // 0x2f8cf0: 0xace00820  sw          $zero, 0x820($a3)
    ctx->pc = 0x2f8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
    // 0x2f8cf4: 0xace005a0  sw          $zero, 0x5A0($a3)
    ctx->pc = 0x2f8cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 0));
    // 0x2f8cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CF8u;
        // 0x2f8cfc: 0xace006e0  sw          $zero, 0x6E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8D00u;
label_2f8d00:
    // 0x2f8d00: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2f8d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d04: 0x80bf75c  j           func_2FDD70
    ctx->pc = 0x2F8D04u;
    ctx->pc = 0x2F8D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8D04u;
    // 0x2f8d08: 0x24a50530  addiu       $a1, $a1, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    sub_002FDD70_0x2fdd70(rdram, ctx, runtime); return;
    ctx->pc = 0x2F8D0Cu;
    // 0x2f8d0c: 0x0  nop
    ctx->pc = 0x2f8d0cu;
    // NOP
    ctx->pc = 0x2f8d10u;
}
