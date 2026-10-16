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

// Function: sub_0017BBE8
// Address: 0x17bbe8 - 0x17bd18
void sub_0017BBE8_0x17bbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BBE8_0x17bbe8");
#endif

    switch (ctx->pc) {
        case 0x17bc08u: goto label_17bc08;
        case 0x17bc2cu: goto label_17bc2c;
        case 0x17bc34u: goto label_17bc34;
        case 0x17bc3cu: goto label_17bc3c;
        case 0x17bc88u: goto label_17bc88;
        case 0x17bc94u: goto label_17bc94;
        case 0x17bcfcu: goto label_17bcfc;
        default: break;
    }

    ctx->pc = 0x17bbe8u;

    // 0x17bbe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17bbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17bbec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17bbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17bbf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbf4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17bbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17bbf8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17bbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17bbfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bc00: 0xc05c6b6  jal         func_171AD8
    ctx->pc = 0x17BC00u;
    SET_GPR_U32(ctx, 31, 0x17BC08u);
    ctx->pc = 0x17BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC00u;
    // 0x17bc04: 0x26110120  addiu       $s1, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171AD8u, 0x17BC00u, 0x17BC08u)) {
        return;
    }
    ctx->pc = 0x17BC08u;
label_17bc08:
    // 0x17bc08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17bc08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc0c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17bc10: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17bc14: 0x24636fd8  addiu       $v1, $v1, 0x6FD8
    ctx->pc = 0x17bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28632));
    // 0x17bc18: 0x24426fb8  addiu       $v0, $v0, 0x6FB8
    ctx->pc = 0x17bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28600));
    // 0x17bc1c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x17bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x17bc20: 0x260400f8  addiu       $a0, $s0, 0xF8
    ctx->pc = 0x17bc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x17bc24: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17BC24u;
    SET_GPR_U32(ctx, 31, 0x17BC2Cu);
    ctx->pc = 0x17BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC24u;
    // 0x17bc28: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17BC24u, 0x17BC2Cu)) {
        return;
    }
    ctx->pc = 0x17BC2Cu;
label_17bc2c:
    // 0x17bc2c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17BC2Cu;
    SET_GPR_U32(ctx, 31, 0x17BC34u);
    ctx->pc = 0x17BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC2Cu;
    // 0x17bc30: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17BC2Cu, 0x17BC34u)) {
        return;
    }
    ctx->pc = 0x17BC34u;
label_17bc34:
    // 0x17bc34: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17BC34u;
    SET_GPR_U32(ctx, 31, 0x17BC3Cu);
    ctx->pc = 0x17BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC34u;
    // 0x17bc38: 0x26040108  addiu       $a0, $s0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17BC34u, 0x17BC3Cu)) {
        return;
    }
    ctx->pc = 0x17BC3Cu;
label_17bc3c:
    // 0x17bc3c: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x17bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x17bc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bc44: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x17bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x17bc48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17bc4c: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x17bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x17bc50: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x17bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x17bc54: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x17bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x17bc58: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x17bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x17bc5c: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x17bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x17bc60: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x17bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x17bc64: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x17bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x17bc68: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x17bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x17bc6c: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x17bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x17bc70: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x17bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x17bc74: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x17bc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x17bc78: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x17bc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x17bc7c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x17bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x17bc80: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x17bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x17bc84: 0x0  nop
    ctx->pc = 0x17bc84u;
    // NOP
label_17bc88:
    // 0x17bc88: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x17bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17bc8c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17BC8Cu;
    SET_GPR_U32(ctx, 31, 0x17BC94u);
    ctx->pc = 0x17BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC8Cu;
    // 0x17bc90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17BC8Cu, 0x17BC94u)) {
        return;
    }
    ctx->pc = 0x17BC94u;
label_17bc94:
    // 0x17bc94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17bc94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17bc9c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x17bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x17bca0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17BCA0u;
    {
        const bool branch_taken_0x17bca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCA0u;
        // 0x17bca4: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bca0) {
            ctx->pc = 0x17BCACu;
            goto label_17bcac;
        }
    }
    ctx->pc = 0x17BCA8u;
    // 0x17bca8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x17bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_17bcac:
    // 0x17bcac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17bcb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17bcb4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x17bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x17bcb8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x17bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x17bcbc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x17bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x17bcc0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17bcc4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x17bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17bcc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17bccc: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x17bcccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17bcd0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17BCD0u;
    {
        const bool branch_taken_0x17bcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCD0u;
        // 0x17bcd4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcd0) {
            ctx->pc = 0x17BC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bc88;
        }
    }
    ctx->pc = 0x17BCD8u;
    // 0x17bcd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bcdc: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x17bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x17bce0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x17bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x17bce4: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x17bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x17bce8: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x17bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x17bcec: 0x24a5f8b0  addiu       $a1, $a1, -0x750
    ctx->pc = 0x17bcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
    // 0x17bcf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17bcf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcf4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17BCF4u;
    SET_GPR_U32(ctx, 31, 0x17BCFCu);
    ctx->pc = 0x17BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BCF4u;
    // 0x17bcf8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17BCF4u, 0x17BCFCu)) {
        return;
    }
    ctx->pc = 0x17BCFCu;
label_17bcfc:
    // 0x17bcfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17bcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17bd00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bd04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17bd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bd08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17bd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd10: 0x3e00008  jr          $ra
    ctx->pc = 0x17BD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD10u;
        // 0x17bd14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD18u;
}
