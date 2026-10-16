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

// Function: sub_0026BE20
// Address: 0x26be20 - 0x26bf28
void sub_0026BE20_0x26be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BE20_0x26be20");
#endif

    switch (ctx->pc) {
        case 0x26be54u: goto label_26be54;
        case 0x26be7cu: goto label_26be7c;
        case 0x26be8cu: goto label_26be8c;
        case 0x26beccu: goto label_26becc;
        case 0x26bee4u: goto label_26bee4;
        case 0x26bef0u: goto label_26bef0;
        case 0x26bf00u: goto label_26bf00;
        case 0x26bf0cu: goto label_26bf0c;
        case 0x26bf1cu: goto label_26bf1c;
        default: break;
    }

    ctx->pc = 0x26be20u;

    // 0x26be20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26be24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x26be24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be28: 0x2283f  dsra32      $a1, $v0, 0
    ctx->pc = 0x26be28u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26be2c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x26be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x26be30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26be30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26be34: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x26be34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    // 0x26be38: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x26be38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26be3c: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x26be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x26be40: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x26be40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26be44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BE44u;
    {
        const bool branch_taken_0x26be44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE44u;
        // 0x26be48: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be44) {
            ctx->pc = 0x26BE60u;
            goto label_26be60;
        }
    }
    ctx->pc = 0x26BE4Cu;
    // 0x26be4c: 0xc09c220  jal         func_270880
    ctx->pc = 0x26BE4Cu;
    SET_GPR_U32(ctx, 31, 0x26BE54u);
    ctx->pc = 0x26BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE4Cu;
    // 0x26be50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270880u, 0x26BE4Cu, 0x26BE54u)) {
        return;
    }
    ctx->pc = 0x26BE54u;
label_26be54:
    // 0x26be54: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x26BE54u;
    {
        const bool branch_taken_0x26be54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE54u;
        // 0x26be58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be54) {
            ctx->pc = 0x26BF20u;
            goto label_26bf20;
        }
    }
    ctx->pc = 0x26BE5Cu;
    // 0x26be5c: 0x0  nop
    ctx->pc = 0x26be5cu;
    // NOP
label_26be60:
    // 0x26be60: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x26be60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x26be64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26be64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26be68: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x26be68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26be6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BE6Cu;
    {
        const bool branch_taken_0x26be6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26be6c) {
            ctx->pc = 0x26BE84u;
            goto label_26be84;
        }
    }
    ctx->pc = 0x26BE74u;
    // 0x26be74: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26BE74u;
    SET_GPR_U32(ctx, 31, 0x26BE7Cu);
    ctx->pc = 0x26BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE74u;
    // 0x26be78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26BE74u, 0x26BE7Cu)) {
        return;
    }
    ctx->pc = 0x26BE7Cu;
label_26be7c:
    // 0x26be7c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26BE7Cu;
    {
        const bool branch_taken_0x26be7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE7Cu;
        // 0x26be80: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be7c) {
            ctx->pc = 0x26BF20u;
            goto label_26bf20;
        }
    }
    ctx->pc = 0x26BE84u;
label_26be84:
    // 0x26be84: 0xc09b9fe  jal         func_26E7F8
    ctx->pc = 0x26BE84u;
    SET_GPR_U32(ctx, 31, 0x26BE8Cu);
    ctx->pc = 0x26BE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE84u;
    // 0x26be88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26E7F8u, 0x26BE84u, 0x26BE8Cu)) {
        return;
    }
    ctx->pc = 0x26BE8Cu;
label_26be8c:
    // 0x26be8c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x26be8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x26be90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26be90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26be94: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26BE94u;
    {
        const bool branch_taken_0x26be94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE94u;
        // 0x26be98: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be94) {
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BE9Cu;
    // 0x26be9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BE9Cu;
    {
        const bool branch_taken_0x26be9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE9Cu;
        // 0x26bea0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be9c) {
            ctx->pc = 0x26BEB4u;
            goto label_26beb4;
        }
    }
    ctx->pc = 0x26BEA4u;
    // 0x26bea4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26BEA4u;
    {
        const bool branch_taken_0x26bea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEA4u;
        // 0x26bea8: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bea4) {
            ctx->pc = 0x26BEC4u;
            goto label_26bec4;
        }
    }
    ctx->pc = 0x26BEACu;
    // 0x26beac: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26BEACu;
    {
        const bool branch_taken_0x26beac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEACu;
        // 0x26beb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26beac) {
            ctx->pc = 0x26BF14u;
            goto label_26bf14;
        }
    }
    ctx->pc = 0x26BEB4u;
label_26beb4:
    // 0x26beb4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26BEB4u;
    {
        const bool branch_taken_0x26beb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEB4u;
        // 0x26beb8: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26beb4) {
            ctx->pc = 0x26BEF8u;
            goto label_26bef8;
        }
    }
    ctx->pc = 0x26BEBCu;
    // 0x26bebc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26BEBCu;
    {
        const bool branch_taken_0x26bebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEBCu;
        // 0x26bec0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bebc) {
            ctx->pc = 0x26BF14u;
            goto label_26bf14;
        }
    }
    ctx->pc = 0x26BEC4u;
label_26bec4:
    // 0x26bec4: 0xc09c220  jal         func_270880
    ctx->pc = 0x26BEC4u;
    SET_GPR_U32(ctx, 31, 0x26BECCu);
    ctx->pc = 0x26BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEC4u;
    // 0x26bec8: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270880u, 0x26BEC4u, 0x26BECCu)) {
        return;
    }
    ctx->pc = 0x26BECCu;
label_26becc:
    // 0x26becc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26BECCu;
    {
        const bool branch_taken_0x26becc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BECCu;
        // 0x26bed0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26becc) {
            ctx->pc = 0x26BF20u;
            goto label_26bf20;
        }
    }
    ctx->pc = 0x26BED4u;
label_26bed4:
    // 0x26bed4: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x26bed4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bed8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26bed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bedc: 0xc09c58e  jal         func_271638
    ctx->pc = 0x26BEDCu;
    SET_GPR_U32(ctx, 31, 0x26BEE4u);
    ctx->pc = 0x26BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEDCu;
    // 0x26bee0: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271638u, 0x26BEDCu, 0x26BEE4u)) {
        return;
    }
    ctx->pc = 0x26BEE4u;
label_26bee4:
    // 0x26bee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26bee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bee8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26BEE8u;
    SET_GPR_U32(ctx, 31, 0x26BEF0u);
    ctx->pc = 0x26BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEE8u;
    // 0x26beec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26BEE8u, 0x26BEF0u)) {
        return;
    }
    ctx->pc = 0x26BEF0u;
label_26bef0:
    // 0x26bef0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26BEF0u;
    {
        const bool branch_taken_0x26bef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEF0u;
        // 0x26bef4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bef0) {
            ctx->pc = 0x26BF20u;
            goto label_26bf20;
        }
    }
    ctx->pc = 0x26BEF8u;
label_26bef8:
    // 0x26bef8: 0xc09c220  jal         func_270880
    ctx->pc = 0x26BEF8u;
    SET_GPR_U32(ctx, 31, 0x26BF00u);
    ctx->pc = 0x26BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEF8u;
    // 0x26befc: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270880u, 0x26BEF8u, 0x26BF00u)) {
        return;
    }
    ctx->pc = 0x26BF00u;
label_26bf00:
    // 0x26bf00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26bf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf04: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26BF04u;
    SET_GPR_U32(ctx, 31, 0x26BF0Cu);
    ctx->pc = 0x26BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF04u;
    // 0x26bf08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26BF04u, 0x26BF0Cu)) {
        return;
    }
    ctx->pc = 0x26BF0Cu;
label_26bf0c:
    // 0x26bf0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26BF0Cu;
    {
        const bool branch_taken_0x26bf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF0Cu;
        // 0x26bf10: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf0c) {
            ctx->pc = 0x26BF20u;
            goto label_26bf20;
        }
    }
    ctx->pc = 0x26BF14u;
label_26bf14:
    // 0x26bf14: 0xc09c58e  jal         func_271638
    ctx->pc = 0x26BF14u;
    SET_GPR_U32(ctx, 31, 0x26BF1Cu);
    ctx->pc = 0x26BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF14u;
    // 0x26bf18: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271638u, 0x26BF14u, 0x26BF1Cu)) {
        return;
    }
    ctx->pc = 0x26BF1Cu;
label_26bf1c:
    // 0x26bf1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26bf20:
    // 0x26bf20: 0x3e00008  jr          $ra
    ctx->pc = 0x26BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF20u;
        // 0x26bf24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BF28u;
}
