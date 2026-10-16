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

// Function: sub_0016FFF0
// Address: 0x16fff0 - 0x170070
void sub_0016FFF0_0x16fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FFF0_0x16fff0");
#endif

    switch (ctx->pc) {
        case 0x170014u: goto label_170014;
        case 0x170034u: goto label_170034;
        case 0x17003cu: goto label_17003c;
        case 0x170044u: goto label_170044;
        case 0x170050u: goto label_170050;
        default: break;
    }

    ctx->pc = 0x16fff0u;

    // 0x16fff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16fff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16fff4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16fff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16fff8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16fffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170000: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x170000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170004: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x170004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x170008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17000c: 0xc05c104  jal         func_170410
    ctx->pc = 0x17000Cu;
    SET_GPR_U32(ctx, 31, 0x170014u);
    ctx->pc = 0x170010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17000Cu;
    // 0x170010: 0x261100f0  addiu       $s1, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170410u, 0x17000Cu, 0x170014u)) {
        return;
    }
    ctx->pc = 0x170014u;
label_170014:
    // 0x170014: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x170014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x170018: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x170018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17001c: 0x246351b0  addiu       $v1, $v1, 0x51B0
    ctx->pc = 0x17001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20912));
    // 0x170020: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x170020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
    // 0x170024: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x170024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x170028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17002c: 0xc065a5e  jal         func_196978
    ctx->pc = 0x17002Cu;
    SET_GPR_U32(ctx, 31, 0x170034u);
    ctx->pc = 0x170030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17002Cu;
    // 0x170030: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196978u, 0x17002Cu, 0x170034u)) {
        return;
    }
    ctx->pc = 0x170034u;
label_170034:
    // 0x170034: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x170034u;
    SET_GPR_U32(ctx, 31, 0x17003Cu);
    ctx->pc = 0x170038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170034u;
    // 0x170038: 0x26040114  addiu       $a0, $s0, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x170034u, 0x17003Cu)) {
        return;
    }
    ctx->pc = 0x17003Cu;
label_17003c:
    // 0x17003c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17003Cu;
    SET_GPR_U32(ctx, 31, 0x170044u);
    ctx->pc = 0x170040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17003Cu;
    // 0x170040: 0x2604011c  addiu       $a0, $s0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17003Cu, 0x170044u)) {
        return;
    }
    ctx->pc = 0x170044u;
label_170044:
    // 0x170044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170048: 0xc065a7a  jal         func_1969E8
    ctx->pc = 0x170048u;
    SET_GPR_U32(ctx, 31, 0x170050u);
    ctx->pc = 0x17004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170048u;
    // 0x17004c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1969E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1969E8u, 0x170048u, 0x170050u)) {
        return;
    }
    ctx->pc = 0x170050u;
label_170050:
    // 0x170050: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170054: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x170054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170058: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x170058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17005c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17005cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170064: 0x3e00008  jr          $ra
    ctx->pc = 0x170064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170064u;
        // 0x170068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17006Cu;
    // 0x17006c: 0x0  nop
    ctx->pc = 0x17006cu;
    // NOP
    ctx->pc = 0x170070u;
}
