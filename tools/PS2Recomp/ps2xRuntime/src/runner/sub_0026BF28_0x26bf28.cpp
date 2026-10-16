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

// Function: sub_0026BF28
// Address: 0x26bf28 - 0x26c020
void sub_0026BF28_0x26bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BF28_0x26bf28");
#endif

    switch (ctx->pc) {
        case 0x26bf60u: goto label_26bf60;
        case 0x26bf84u: goto label_26bf84;
        case 0x26bfc8u: goto label_26bfc8;
        case 0x26bfdcu: goto label_26bfdc;
        case 0x26bff0u: goto label_26bff0;
        case 0x26c000u: goto label_26c000;
        case 0x26c010u: goto label_26c010;
        default: break;
    }

    ctx->pc = 0x26bf28u;

    // 0x26bf28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bf2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x26bf2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf30: 0x2283f  dsra32      $a1, $v0, 0
    ctx->pc = 0x26bf30u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26bf34: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x26bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x26bf38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26bf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26bf3c: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x26bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    // 0x26bf40: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x26bf40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26bf44: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x26bf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x26bf48: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x26bf48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26bf4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BF4Cu;
    {
        const bool branch_taken_0x26bf4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF4Cu;
        // 0x26bf50: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf4c) {
            ctx->pc = 0x26BF68u;
            goto label_26bf68;
        }
    }
    ctx->pc = 0x26BF54u;
    // 0x26bf54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26bf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf58: 0xc09c58e  jal         func_271638
    ctx->pc = 0x26BF58u;
    SET_GPR_U32(ctx, 31, 0x26BF60u);
    ctx->pc = 0x26BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF58u;
    // 0x26bf5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271638u, 0x26BF58u, 0x26BF60u)) {
        return;
    }
    ctx->pc = 0x26BF60u;
label_26bf60:
    // 0x26bf60: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x26BF60u;
    {
        const bool branch_taken_0x26bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF60u;
        // 0x26bf64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf60) {
            ctx->pc = 0x26C014u;
            goto label_26c014;
        }
    }
    ctx->pc = 0x26BF68u;
label_26bf68:
    // 0x26bf68: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x26bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x26bf6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26bf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26bf70: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x26bf70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26bf74: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x26BF74u;
    {
        const bool branch_taken_0x26bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF74u;
        // 0x26bf78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf74) {
            ctx->pc = 0x26C008u;
            goto label_26c008;
        }
    }
    ctx->pc = 0x26BF7Cu;
    // 0x26bf7c: 0xc09b9fe  jal         func_26E7F8
    ctx->pc = 0x26BF7Cu;
    SET_GPR_U32(ctx, 31, 0x26BF84u);
    ctx->pc = 0x26BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF7Cu;
    // 0x26bf80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26E7F8u, 0x26BF7Cu, 0x26BF84u)) {
        return;
    }
    ctx->pc = 0x26BF84u;
label_26bf84:
    // 0x26bf84: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x26bf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x26bf88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bf8c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26BF8Cu;
    {
        const bool branch_taken_0x26bf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF8Cu;
        // 0x26bf90: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf8c) {
            ctx->pc = 0x26BFD0u;
            goto label_26bfd0;
        }
    }
    ctx->pc = 0x26BF94u;
    // 0x26bf94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BF94u;
    {
        const bool branch_taken_0x26bf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF94u;
        // 0x26bf98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf94) {
            ctx->pc = 0x26BFACu;
            goto label_26bfac;
        }
    }
    ctx->pc = 0x26BF9Cu;
    // 0x26bf9c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26BF9Cu;
    {
        const bool branch_taken_0x26bf9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF9Cu;
        // 0x26bfa0: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf9c) {
            ctx->pc = 0x26BFBCu;
            goto label_26bfbc;
        }
    }
    ctx->pc = 0x26BFA4u;
    // 0x26bfa4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26BFA4u;
    {
        const bool branch_taken_0x26bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bfa4) {
            ctx->pc = 0x26BFF8u;
            goto label_26bff8;
        }
    }
    ctx->pc = 0x26BFACu;
label_26bfac:
    // 0x26bfac: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26BFACu;
    {
        const bool branch_taken_0x26bfac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFACu;
        // 0x26bfb0: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfac) {
            ctx->pc = 0x26BFE4u;
            goto label_26bfe4;
        }
    }
    ctx->pc = 0x26BFB4u;
    // 0x26bfb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26BFB4u;
    {
        const bool branch_taken_0x26bfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bfb4) {
            ctx->pc = 0x26BFF8u;
            goto label_26bff8;
        }
    }
    ctx->pc = 0x26BFBCu;
label_26bfbc:
    // 0x26bfbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26bfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bfc0: 0xc09c58e  jal         func_271638
    ctx->pc = 0x26BFC0u;
    SET_GPR_U32(ctx, 31, 0x26BFC8u);
    ctx->pc = 0x26BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFC0u;
    // 0x26bfc4: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271638u, 0x26BFC0u, 0x26BFC8u)) {
        return;
    }
    ctx->pc = 0x26BFC8u;
label_26bfc8:
    // 0x26bfc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26BFC8u;
    {
        const bool branch_taken_0x26bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFC8u;
        // 0x26bfcc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfc8) {
            ctx->pc = 0x26C014u;
            goto label_26c014;
        }
    }
    ctx->pc = 0x26BFD0u;
label_26bfd0:
    // 0x26bfd0: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x26bfd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bfd4: 0xc09c220  jal         func_270880
    ctx->pc = 0x26BFD4u;
    SET_GPR_U32(ctx, 31, 0x26BFDCu);
    ctx->pc = 0x26BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFD4u;
    // 0x26bfd8: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270880u, 0x26BFD4u, 0x26BFDCu)) {
        return;
    }
    ctx->pc = 0x26BFDCu;
label_26bfdc:
    // 0x26bfdc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26BFDCu;
    {
        const bool branch_taken_0x26bfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFDCu;
        // 0x26bfe0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfdc) {
            ctx->pc = 0x26C014u;
            goto label_26c014;
        }
    }
    ctx->pc = 0x26BFE4u;
label_26bfe4:
    // 0x26bfe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bfe8: 0xc09c58e  jal         func_271638
    ctx->pc = 0x26BFE8u;
    SET_GPR_U32(ctx, 31, 0x26BFF0u);
    ctx->pc = 0x26BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFE8u;
    // 0x26bfec: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271638u, 0x26BFE8u, 0x26BFF0u)) {
        return;
    }
    ctx->pc = 0x26BFF0u;
label_26bff0:
    // 0x26bff0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26BFF0u;
    {
        const bool branch_taken_0x26bff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFF0u;
        // 0x26bff4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bff0) {
            ctx->pc = 0x26C004u;
            goto label_26c004;
        }
    }
    ctx->pc = 0x26BFF8u;
label_26bff8:
    // 0x26bff8: 0xc09c220  jal         func_270880
    ctx->pc = 0x26BFF8u;
    SET_GPR_U32(ctx, 31, 0x26C000u);
    ctx->pc = 0x26BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFF8u;
    // 0x26bffc: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270880u, 0x26BFF8u, 0x26C000u)) {
        return;
    }
    ctx->pc = 0x26C000u;
label_26c000:
    // 0x26c000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c004:
    // 0x26c004: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c008:
    // 0x26c008: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26C008u;
    SET_GPR_U32(ctx, 31, 0x26C010u);
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26C008u, 0x26C010u)) {
        return;
    }
    ctx->pc = 0x26C010u;
label_26c010:
    // 0x26c010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26c014:
    // 0x26c014: 0x3e00008  jr          $ra
    ctx->pc = 0x26C014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C014u;
        // 0x26c018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C01Cu;
    // 0x26c01c: 0x0  nop
    ctx->pc = 0x26c01cu;
    // NOP
    ctx->pc = 0x26c020u;
}
