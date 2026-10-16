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

// Function: sub_002E0EC0
// Address: 0x2e0ec0 - 0x2e0f68
void sub_002E0EC0_0x2e0ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0EC0_0x2e0ec0");
#endif

    ctx->pc = 0x2e0ec0u;

    // 0x2e0ec0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2e0ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0ec4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e0ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ec8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2e0ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0ecc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2e0eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2e0ed0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2e0ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0ed4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2e0ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2e0ed8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2e0ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e0edc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2e0edcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2e0ee0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e0ee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e0ee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e0ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0ee8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e0ee8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0eec: 0x0  nop
    ctx->pc = 0x2e0eecu;
    // NOP
    // 0x2e0ef0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2E0EF0u;
    {
        const bool branch_taken_0x2e0ef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EF0u;
        // 0x2e0ef4: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ef0) {
            ctx->pc = 0x2E0F60u;
            goto label_2e0f60;
        }
    }
    ctx->pc = 0x2E0EF8u;
    // 0x2e0ef8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e0ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e0efc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x2e0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x2e0f00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e0f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e0f04: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2e0f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e0f08: 0x31dc2  srl         $v1, $v1, 23
    ctx->pc = 0x2e0f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x2e0f0c: 0x2463ff81  addiu       $v1, $v1, -0x7F
    ctx->pc = 0x2e0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
    // 0x2e0f10: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x2e0f10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e0f14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e0f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e0f18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0F18u;
    {
        const bool branch_taken_0x2e0f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F18u;
        // 0x2e0f1c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f18) {
            ctx->pc = 0x2E0F30u;
            goto label_2e0f30;
        }
    }
    ctx->pc = 0x2E0F20u;
    // 0x2e0f20: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2e0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2e0f24: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2e0f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e0f28: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2e0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2e0f2c: 0x0  nop
    ctx->pc = 0x2e0f2cu;
    // NOP
label_2e0f30:
    // 0x2e0f30: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x2e0f30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2e0f34: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2e0f38: 0x24424400  addiu       $v0, $v0, 0x4400
    ctx->pc = 0x2e0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17408));
    // 0x2e0f3c: 0x51c43  sra         $v1, $a1, 17
    ctx->pc = 0x2e0f3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 17));
    // 0x2e0f40: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2e0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e0f44: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x2e0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x2e0f48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e0f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e0f4c: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x2e0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x2e0f50: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2e0f50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0f54: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2e0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e0f58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e0f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e0f5c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2e0f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2e0f60:
    // 0x2e0f60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0F68u;
}
