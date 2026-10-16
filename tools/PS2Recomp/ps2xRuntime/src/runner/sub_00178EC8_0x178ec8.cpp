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

// Function: sub_00178EC8
// Address: 0x178ec8 - 0x178fb0
void sub_00178EC8_0x178ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178EC8_0x178ec8");
#endif

    switch (ctx->pc) {
        case 0x178f04u: goto label_178f04;
        case 0x178f2cu: goto label_178f2c;
        case 0x178f38u: goto label_178f38;
        case 0x178f4cu: goto label_178f4c;
        case 0x178f54u: goto label_178f54;
        case 0x178f68u: goto label_178f68;
        default: break;
    }

    ctx->pc = 0x178ec8u;

    // 0x178ec8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x178ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x178ecc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x178eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x178ed0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x178ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x178ed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ed8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x178ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x178edc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x178edcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178ee8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x178ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x178eec: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x178eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x178ef0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x178EF0u;
    {
        const bool branch_taken_0x178ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EF0u;
        // 0x178ef4: 0x8c920000  lw          $s2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ef0) {
            ctx->pc = 0x178F68u;
            goto label_178f68;
        }
    }
    ctx->pc = 0x178EF8u;
    // 0x178ef8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x178ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x178efc: 0xc080f74  jal         func_203DD0
    ctx->pc = 0x178EFCu;
    SET_GPR_U32(ctx, 31, 0x178F04u);
    ctx->pc = 0x178F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EFCu;
    // 0x178f00: 0x24a56540  addiu       $a1, $a1, 0x6540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203DD0u, 0x178EFCu, 0x178F04u)) {
        return;
    }
    ctx->pc = 0x178F04u;
label_178f04:
    // 0x178f04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x178F04u;
    {
        const bool branch_taken_0x178f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178f04) {
            ctx->pc = 0x178F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178F04u;
            // 0x178f08: 0x8e2200c8  lw          $v0, 0xC8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178F18u;
            goto label_178f18;
        }
    }
    ctx->pc = 0x178F0Cu;
    // 0x178f0c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x178f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x178f10: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x178f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    // 0x178f14: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x178f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_178f18:
    // 0x178f18: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x178F18u;
    {
        const bool branch_taken_0x178f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178f18) {
            ctx->pc = 0x178F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178F18u;
            // 0x178f1c: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178F6Cu;
            goto label_178f6c;
        }
    }
    ctx->pc = 0x178F20u;
    // 0x178f20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x178f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178f24: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x178F24u;
    SET_GPR_U32(ctx, 31, 0x178F2Cu);
    ctx->pc = 0x178F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F24u;
    // 0x178f28: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x178F24u, 0x178F2Cu)) {
        return;
    }
    ctx->pc = 0x178F2Cu;
label_178f2c:
    // 0x178f2c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x178f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178f30: 0xc08665e  jal         func_219978
    ctx->pc = 0x178F30u;
    SET_GPR_U32(ctx, 31, 0x178F38u);
    ctx->pc = 0x178F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F30u;
    // 0x178f34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219978u, 0x178F30u, 0x178F38u)) {
        return;
    }
    ctx->pc = 0x178F38u;
label_178f38:
    // 0x178f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x178f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f3c: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x178f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x178f40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x178f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f44: 0xc0866bc  jal         func_219AF0
    ctx->pc = 0x178F44u;
    SET_GPR_U32(ctx, 31, 0x178F4Cu);
    ctx->pc = 0x178F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F44u;
    // 0x178f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219AF0u, 0x178F44u, 0x178F4Cu)) {
        return;
    }
    ctx->pc = 0x178F4Cu;
label_178f4c:
    // 0x178f4c: 0xc086290  jal         func_218A40
    ctx->pc = 0x178F4Cu;
    SET_GPR_U32(ctx, 31, 0x178F54u);
    ctx->pc = 0x178F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F4Cu;
    // 0x178f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218A40u, 0x178F4Cu, 0x178F54u)) {
        return;
    }
    ctx->pc = 0x178F54u;
label_178f54:
    // 0x178f54: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178F54u;
    {
        const bool branch_taken_0x178f54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F54u;
        // 0x178f58: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f54) {
            ctx->pc = 0x178F68u;
            goto label_178f68;
        }
    }
    ctx->pc = 0x178F5Cu;
    // 0x178f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f60: 0xc08668c  jal         func_219A30
    ctx->pc = 0x178F60u;
    SET_GPR_U32(ctx, 31, 0x178F68u);
    ctx->pc = 0x178F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F60u;
    // 0x178f64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219A30u, 0x178F60u, 0x178F68u)) {
        return;
    }
    ctx->pc = 0x178F68u;
label_178f68:
    // 0x178f68: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x178f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_178f6c:
    // 0x178f6c: 0x26230048  addiu       $v1, $s1, 0x48
    ctx->pc = 0x178f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x178f70: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x178f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x178f74: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x178f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x178f78: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x178f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x178f7c: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x178f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
    // 0x178f80: 0xae440074  sw          $a0, 0x74($s2)
    ctx->pc = 0x178f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 4));
    // 0x178f84: 0xae450078  sw          $a1, 0x78($s2)
    ctx->pc = 0x178f84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 5));
    // 0x178f88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x178f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178f8c: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x178f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x178f90: 0xae530084  sw          $s3, 0x84($s2)
    ctx->pc = 0x178f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 19));
    // 0x178f94: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x178f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x178f98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x178f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178f9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178fa0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x178fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x178FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FA8u;
        // 0x178fac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178FB0u;
}
