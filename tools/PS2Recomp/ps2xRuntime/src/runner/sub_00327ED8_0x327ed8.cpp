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

// Function: sub_00327ED8
// Address: 0x327ed8 - 0x327fd0
void sub_00327ED8_0x327ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327ED8_0x327ed8");
#endif

    switch (ctx->pc) {
        case 0x327f54u: goto label_327f54;
        case 0x327f9cu: goto label_327f9c;
        case 0x327fa4u: goto label_327fa4;
        case 0x327facu: goto label_327fac;
        default: break;
    }

    ctx->pc = 0x327ed8u;

    // 0x327ed8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x327ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x327edc: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x327edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x327ee0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x327ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x327ee4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x327ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x327ee8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x327ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327eec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x327eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x327ef0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x327ef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327ef8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x327ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327efc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x327efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x327f00: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327F00u;
    {
        const bool branch_taken_0x327f00 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x327F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F00u;
        // 0x327f04: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f00) {
            ctx->pc = 0x327F18u;
            goto label_327f18;
        }
    }
    ctx->pc = 0x327F08u;
    // 0x327f08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x327f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x327f0c: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x327f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x327f10: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x327F10u;
    {
        const bool branch_taken_0x327f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x327f10) {
            ctx->pc = 0x327F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327F10u;
            // 0x327f14: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327F24u;
            goto label_327f24;
        }
    }
    ctx->pc = 0x327F18u;
label_327f18:
    // 0x327f18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x327f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x327f1c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x327F1Cu;
    {
        const bool branch_taken_0x327f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F1Cu;
        // 0x327f20: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f1c) {
            ctx->pc = 0x327FB0u;
            goto label_327fb0;
        }
    }
    ctx->pc = 0x327F24u;
label_327f24:
    // 0x327f24: 0x24428590  addiu       $v0, $v0, -0x7A70
    ctx->pc = 0x327f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935952));
    // 0x327f28: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x327f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x327f2c: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327F2Cu;
    {
        const bool branch_taken_0x327f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x327f2c) {
            ctx->pc = 0x327F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327F2Cu;
            // 0x327f30: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327F40u;
            goto label_327f40;
        }
    }
    ctx->pc = 0x327F34u;
    // 0x327f34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x327f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x327f38: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x327F38u;
    {
        const bool branch_taken_0x327f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F38u;
        // 0x327f3c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f38) {
            ctx->pc = 0x327FB0u;
            goto label_327fb0;
        }
    }
    ctx->pc = 0x327F40u;
label_327f40:
    // 0x327f40: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x327f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x327f44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327F44u;
    {
        const bool branch_taken_0x327f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327f44) {
            ctx->pc = 0x327F58u;
            goto label_327f58;
        }
    }
    ctx->pc = 0x327F4Cu;
    // 0x327f4c: 0xc0c9e4c  jal         func_327930
    ctx->pc = 0x327F4Cu;
    SET_GPR_U32(ctx, 31, 0x327F54u);
    ctx->pc = 0x327F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F4Cu;
    // 0x327f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327930u, 0x327F4Cu, 0x327F54u)) {
        return;
    }
    ctx->pc = 0x327F54u;
label_327f54:
    // 0x327f54: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x327f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_327f58:
    // 0x327f58: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x327F58u;
    {
        const bool branch_taken_0x327f58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x327F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F58u;
        // 0x327f5c: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f58) {
            ctx->pc = 0x327F74u;
            goto label_327f74;
        }
    }
    ctx->pc = 0x327F60u;
    // 0x327f60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x327f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x327f64: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x327f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x327f68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x327f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x327f6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x327F6Cu;
    {
        const bool branch_taken_0x327f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F6Cu;
        // 0x327f70: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f6c) {
            ctx->pc = 0x327F9Cu;
            goto label_327f9c;
        }
    }
    ctx->pc = 0x327F74u;
label_327f74:
    // 0x327f74: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x327f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x327f78: 0xfe120020  sd          $s2, 0x20($s0)
    ctx->pc = 0x327f78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 18));
    // 0x327f7c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x327f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x327f80: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x327f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x327f84: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x327f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x327f88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x327f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x327f8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327F8Cu;
    {
        const bool branch_taken_0x327f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F8Cu;
        // 0x327f90: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f8c) {
            ctx->pc = 0x327F9Cu;
            goto label_327f9c;
        }
    }
    ctx->pc = 0x327F94u;
    // 0x327f94: 0xc0c9e2a  jal         func_3278A8
    ctx->pc = 0x327F94u;
    SET_GPR_U32(ctx, 31, 0x327F9Cu);
    ctx->pc = 0x327F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F94u;
    // 0x327f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3278A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3278A8u, 0x327F94u, 0x327F9Cu)) {
        return;
    }
    ctx->pc = 0x327F9Cu;
label_327f9c:
    // 0x327f9c: 0xc0c9f04  jal         func_327C10
    ctx->pc = 0x327F9Cu;
    SET_GPR_U32(ctx, 31, 0x327FA4u);
    ctx->pc = 0x327C10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327C10u, 0x327F9Cu, 0x327FA4u)) {
        return;
    }
    ctx->pc = 0x327FA4u;
label_327fa4:
    // 0x327fa4: 0xc0c9dc6  jal         func_327718
    ctx->pc = 0x327FA4u;
    SET_GPR_U32(ctx, 31, 0x327FACu);
    ctx->pc = 0x327FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FA4u;
    // 0x327fa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327718u, 0x327FA4u, 0x327FACu)) {
        return;
    }
    ctx->pc = 0x327FACu;
label_327fac:
    // 0x327fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327fb0:
    // 0x327fb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x327fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327fb4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x327fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327fb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x327fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327fbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x327fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x327FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FC4u;
        // 0x327fc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327FCCu;
    // 0x327fcc: 0x0  nop
    ctx->pc = 0x327fccu;
    // NOP
    ctx->pc = 0x327fd0u;
}
