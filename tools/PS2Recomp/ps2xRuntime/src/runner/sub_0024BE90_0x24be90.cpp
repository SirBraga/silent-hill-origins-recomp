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

// Function: sub_0024BE90
// Address: 0x24be90 - 0x24bf90
void sub_0024BE90_0x24be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BE90_0x24be90");
#endif

    switch (ctx->pc) {
        case 0x24bef0u: goto label_24bef0;
        case 0x24bf24u: goto label_24bf24;
        case 0x24bf5cu: goto label_24bf5c;
        case 0x24bf68u: goto label_24bf68;
        default: break;
    }

    ctx->pc = 0x24be90u;

    // 0x24be90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24be94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24be98: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x24be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x24be9c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24be9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24bea0: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24BEA0u;
    {
        const bool branch_taken_0x24bea0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEA0u;
        // 0x24bea4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bea0) {
            ctx->pc = 0x24BEE4u;
            goto label_24bee4;
        }
    }
    ctx->pc = 0x24BEA8u;
    // 0x24bea8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BEA8u;
    {
        const bool branch_taken_0x24bea8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEA8u;
        // 0x24beac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bea8) {
            ctx->pc = 0x24BEC0u;
            goto label_24bec0;
        }
    }
    ctx->pc = 0x24BEB0u;
    // 0x24beb0: 0x10c20018  beq         $a2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24BEB0u;
    {
        const bool branch_taken_0x24beb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEB0u;
        // 0x24beb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24beb0) {
            ctx->pc = 0x24BF14u;
            goto label_24bf14;
        }
    }
    ctx->pc = 0x24BEB8u;
    // 0x24beb8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x24BEB8u;
    {
        const bool branch_taken_0x24beb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEB8u;
        // 0x24bebc: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24beb8) {
            ctx->pc = 0x24BF48u;
            goto label_24bf48;
        }
    }
    ctx->pc = 0x24BEC0u;
label_24bec0:
    // 0x24bec0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x24bec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24bec4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x24bec4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x24bec8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x24bec8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x24becc: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x24beccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x24bed0: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x24bed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x24bed4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x24bed4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x24bed8: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x24bed8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x24bedc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x24BEDCu;
    {
        const bool branch_taken_0x24bedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEDCu;
        // 0x24bee0: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bedc) {
            ctx->pc = 0x24BF70u;
            goto label_24bf70;
        }
    }
    ctx->pc = 0x24BEE4u;
label_24bee4:
    // 0x24bee4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24bee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bee8: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x24BEE8u;
    SET_GPR_U32(ctx, 31, 0x24BEF0u);
    ctx->pc = 0x24BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BEE8u;
    // 0x24beec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x24BEE8u, 0x24BEF0u)) {
        return;
    }
    ctx->pc = 0x24BEF0u;
label_24bef0:
    // 0x24bef0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x24bef0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bef4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x24bef4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x24bef8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x24bef8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24befc: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x24befcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x24bf00: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x24bf00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bf04: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x24bf04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x24bf08: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x24bf08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24bf0c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24BF0Cu;
    {
        const bool branch_taken_0x24bf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF0Cu;
        // 0x24bf10: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf0c) {
            ctx->pc = 0x24BF70u;
            goto label_24bf70;
        }
    }
    ctx->pc = 0x24BF14u;
label_24bf14:
    // 0x24bf14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24bf14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24bf1c: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x24BF1Cu;
    SET_GPR_U32(ctx, 31, 0x24BF24u);
    ctx->pc = 0x24BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BF1Cu;
    // 0x24bf20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x24BF1Cu, 0x24BF24u)) {
        return;
    }
    ctx->pc = 0x24BF24u;
label_24bf24:
    // 0x24bf24: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x24bf24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24bf28: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x24bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x24bf2c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x24bf2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24bf30: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x24bf30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x24bf34: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x24bf34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24bf38: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x24bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x24bf3c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x24bf3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24bf40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24BF40u;
    {
        const bool branch_taken_0x24bf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF40u;
        // 0x24bf44: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf40) {
            ctx->pc = 0x24BF70u;
            goto label_24bf70;
        }
    }
    ctx->pc = 0x24BF48u;
label_24bf48:
    // 0x24bf48: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x24bf4c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x24bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x24bf50: 0x24a5b7a0  addiu       $a1, $a1, -0x4860
    ctx->pc = 0x24bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948768));
    // 0x24bf54: 0xc092848  jal         func_24A120
    ctx->pc = 0x24BF54u;
    SET_GPR_U32(ctx, 31, 0x24BF5Cu);
    ctx->pc = 0x24BF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BF54u;
    // 0x24bf58: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24BF54u, 0x24BF5Cu)) {
        return;
    }
    ctx->pc = 0x24BF5Cu;
label_24bf5c:
    // 0x24bf5c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x24bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x24bf60: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24BF60u;
    SET_GPR_U32(ctx, 31, 0x24BF68u);
    ctx->pc = 0x24BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BF60u;
    // 0x24bf64: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24BF60u, 0x24BF68u)) {
        return;
    }
    ctx->pc = 0x24BF68u;
label_24bf68:
    // 0x24bf68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24bf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf6c: 0x0  nop
    ctx->pc = 0x24bf6cu;
    // NOP
label_24bf70:
    // 0x24bf70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24bf70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24bf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24bf78: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x24bf78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24bf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x24BF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF7Cu;
        // 0x24bf80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BF84u;
    // 0x24bf84: 0x0  nop
    ctx->pc = 0x24bf84u;
    // NOP
    // 0x24bf88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x24bf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24bf8c: 0x0  nop
    ctx->pc = 0x24bf8cu;
    // NOP
    ctx->pc = 0x24bf90u;
}
