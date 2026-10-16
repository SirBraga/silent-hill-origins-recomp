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

// Function: sub_0025FCC0
// Address: 0x25fcc0 - 0x25fd40
void sub_0025FCC0_0x25fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FCC0_0x25fcc0");
#endif

    switch (ctx->pc) {
        case 0x25fd00u: goto label_25fd00;
        case 0x25fd28u: goto label_25fd28;
        default: break;
    }

    ctx->pc = 0x25fcc0u;

    // 0x25fcc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fcc4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x25fcc8: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x25fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3630u));
    // 0x25fccc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25fcd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fcd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25FCD4u;
    {
        const bool branch_taken_0x25fcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCD4u;
        // 0x25fcd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcd4) {
            ctx->pc = 0x25FD08u;
            goto label_25fd08;
        }
    }
    ctx->pc = 0x25FCDCu;
    // 0x25fcdc: 0x90430062  lbu         $v1, 0x62($v0)
    ctx->pc = 0x25fcdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x25fce0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x25fce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25fce4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25fce8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25FCE8u;
    {
        const bool branch_taken_0x25fce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCE8u;
        // 0x25fcec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fce8) {
            ctx->pc = 0x25FD2Cu;
            goto label_25fd2c;
        }
    }
    ctx->pc = 0x25FCF0u;
    // 0x25fcf0: 0xc4ad0054  lwc1        $f13, 0x54($a1)
    ctx->pc = 0x25fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25fcf4: 0xc4ac0050  lwc1        $f12, 0x50($a1)
    ctx->pc = 0x25fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25fcf8: 0xc0987ce  jal         func_261F38
    ctx->pc = 0x25FCF8u;
    SET_GPR_U32(ctx, 31, 0x25FD00u);
    ctx->pc = 0x25FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FCF8u;
    // 0x25fcfc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x261F38u, 0x25FCF8u, 0x25FD00u)) {
        return;
    }
    ctx->pc = 0x25FD00u;
label_25fd00:
    // 0x25fd00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25FD00u;
    {
        const bool branch_taken_0x25fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD00u;
        // 0x25fd04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd00) {
            ctx->pc = 0x25FD2Cu;
            goto label_25fd2c;
        }
    }
    ctx->pc = 0x25FD08u;
label_25fd08:
    // 0x25fd08: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x25fd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25fd0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25fd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25fd10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FD10u;
    {
        const bool branch_taken_0x25fd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD10u;
        // 0x25fd14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd10) {
            ctx->pc = 0x25FD28u;
            goto label_25fd28;
        }
    }
    ctx->pc = 0x25FD18u;
    // 0x25fd18: 0xc4ad0054  lwc1        $f13, 0x54($a1)
    ctx->pc = 0x25fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25fd1c: 0xc4ac0050  lwc1        $f12, 0x50($a1)
    ctx->pc = 0x25fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25fd20: 0xc0987ce  jal         func_261F38
    ctx->pc = 0x25FD20u;
    SET_GPR_U32(ctx, 31, 0x25FD28u);
    ctx->pc = 0x25FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD20u;
    // 0x25fd24: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x261F38u, 0x25FD20u, 0x25FD28u)) {
        return;
    }
    ctx->pc = 0x25FD28u;
label_25fd28:
    // 0x25fd28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25fd28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fd2c:
    // 0x25fd2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fd30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25fd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fd34: 0x3e00008  jr          $ra
    ctx->pc = 0x25FD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD34u;
        // 0x25fd38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FD3Cu;
    // 0x25fd3c: 0x0  nop
    ctx->pc = 0x25fd3cu;
    // NOP
    ctx->pc = 0x25fd40u;
}
