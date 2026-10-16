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

// Function: sub_001AAA70
// Address: 0x1aaa70 - 0x1aab18
void sub_001AAA70_0x1aaa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAA70_0x1aaa70");
#endif

    switch (ctx->pc) {
        case 0x1aaadcu: goto label_1aaadc;
        default: break;
    }

    ctx->pc = 0x1aaa70u;

    // 0x1aaa70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aaa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aaa74: 0x2ca20191  sltiu       $v0, $a1, 0x191
    ctx->pc = 0x1aaa74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)401) ? 1 : 0);
    // 0x1aaa78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aaa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aaa7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAA7Cu;
    {
        const bool branch_taken_0x1aaa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA7Cu;
        // 0x1aaa80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa7c) {
            ctx->pc = 0x1AAA8Cu;
            goto label_1aaa8c;
        }
    }
    ctx->pc = 0x1AAA84u;
    // 0x1aaa84: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1AAA84u;
    {
        const bool branch_taken_0x1aaa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA84u;
        // 0x1aaa88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa84) {
            ctx->pc = 0x1AAAE4u;
            goto label_1aaae4;
        }
    }
    ctx->pc = 0x1AAA8Cu;
label_1aaa8c:
    // 0x1aaa8c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAA8Cu;
    {
        const bool branch_taken_0x1aaa8c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA8Cu;
        // 0x1aaa90: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa8c) {
            ctx->pc = 0x1AAAA8u;
            goto label_1aaaa8;
        }
    }
    ctx->pc = 0x1AAA94u;
    // 0x1aaa94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1aaa94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaa98: 0x0  nop
    ctx->pc = 0x1aaa98u;
    // NOP
    // 0x1aaa9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aaa9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aaaa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAAA0u;
    {
        const bool branch_taken_0x1aaaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaaa0) {
            ctx->pc = 0x1AAAC0u;
            goto label_1aaac0;
        }
    }
    ctx->pc = 0x1AAAA8u;
label_1aaaa8:
    // 0x1aaaa8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1aaaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1aaaac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aaaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aaab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aaab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaab4: 0x0  nop
    ctx->pc = 0x1aaab4u;
    // NOP
    // 0x1aaab8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aaab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aaabc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1aaabcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1aaac0:
    // 0x1aaac0: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x1aaac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x1aaac4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aaac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aaac8: 0x24900090  addiu       $s0, $a0, 0x90
    ctx->pc = 0x1aaac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x1aaacc: 0x0  nop
    ctx->pc = 0x1aaaccu;
    // NOP
    // 0x1aaad0: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1aaad0u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x1aaad4: 0xc06a9fc  jal         func_1AA7F0
    ctx->pc = 0x1AAAD4u;
    SET_GPR_U32(ctx, 31, 0x1AAADCu);
    ctx->pc = 0x1AAAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAAD4u;
    // 0x1aaad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA7F0u, 0x1AAAD4u, 0x1AAADCu)) {
        return;
    }
    ctx->pc = 0x1AAADCu;
label_1aaadc:
    // 0x1aaadc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1aaadcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x1aaae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aaae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaae4:
    // 0x1aaae4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aaae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aaae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaaec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAECu;
        // 0x1aaaf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAAF4u;
    // 0x1aaaf4: 0x0  nop
    ctx->pc = 0x1aaaf4u;
    // NOP
    // 0x1aaaf8: 0x0  nop
    ctx->pc = 0x1aaaf8u;
    // NOP
    // 0x1aaafc: 0x0  nop
    ctx->pc = 0x1aaafcu;
    // NOP
    // 0x1aab00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1aab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aab04: 0x0  nop
    ctx->pc = 0x1aab04u;
    // NOP
    // 0x1aab08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1aab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aab0c: 0x0  nop
    ctx->pc = 0x1aab0cu;
    // NOP
    // 0x1aab10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1aab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aab14: 0x0  nop
    ctx->pc = 0x1aab14u;
    // NOP
    ctx->pc = 0x1aab18u;
}
