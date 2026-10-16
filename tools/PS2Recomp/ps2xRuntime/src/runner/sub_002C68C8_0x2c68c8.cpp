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

// Function: sub_002C68C8
// Address: 0x2c68c8 - 0x2c6990
void sub_002C68C8_0x2c68c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C68C8_0x2c68c8");
#endif

    switch (ctx->pc) {
        case 0x2c6928u: goto label_2c6928;
        case 0x2c6974u: goto label_2c6974;
        default: break;
    }

    ctx->pc = 0x2c68c8u;

    // 0x2c68c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c68c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c68cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c68ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c68d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c68d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c68d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c68d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c68d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c68dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c68dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c68e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c68e4: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x2c68e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2c68e8: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x2c68e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c68ec: 0xc6020104  lwc1        $f2, 0x104($s0)
    ctx->pc = 0x2c68ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c68f0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c68f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2c68f4: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x2c68f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68f8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2c68f8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2c68fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2c68fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2c6900: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2c6900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6904: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2c6904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6908: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c6908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c690c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c690cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c6910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6914: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2c6914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c6918: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2c6918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c691c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2c691cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c6920: 0xc0aa7ea  jal         func_2A9FA8
    ctx->pc = 0x2C6920u;
    SET_GPR_U32(ctx, 31, 0x2C6928u);
    ctx->pc = 0x2C6924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6920u;
    // 0x2c6924: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9FA8u, 0x2C6920u, 0x2C6928u)) {
        return;
    }
    ctx->pc = 0x2C6928u;
label_2c6928:
    // 0x2c6928: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c6928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c692c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C692Cu;
    {
        const bool branch_taken_0x2c692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c692c) {
            ctx->pc = 0x2C6930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C692Cu;
            // 0x2c6930: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C697Cu;
            goto label_2c697c;
        }
    }
    ctx->pc = 0x2C6934u;
    // 0x2c6934: 0x96020054  lhu         $v0, 0x54($s0)
    ctx->pc = 0x2c6934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2c6938: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2c6938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c693c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C693Cu;
    {
        const bool branch_taken_0x2c693c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C693Cu;
        // 0x2c6940: 0xae1100d0  sw          $s1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c693c) {
            ctx->pc = 0x2C6958u;
            goto label_2c6958;
        }
    }
    ctx->pc = 0x2C6944u;
    // 0x2c6944: 0x96020054  lhu         $v0, 0x54($s0)
    ctx->pc = 0x2c6944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2c6948: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c6948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c694c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c6950: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x2c6950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x2c6954: 0x0  nop
    ctx->pc = 0x2c6954u;
    // NOP
label_2c6958:
    // 0x2c6958: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2c6958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c695c: 0x26080080  addiu       $t0, $s0, 0x80
    ctx->pc = 0x2c695cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2c6960: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c6960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6964: 0x26070100  addiu       $a3, $s0, 0x100
    ctx->pc = 0x2c6964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2c6968: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2c6968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c696c: 0xc0aa7ea  jal         func_2A9FA8
    ctx->pc = 0x2C696Cu;
    SET_GPR_U32(ctx, 31, 0x2C6974u);
    ctx->pc = 0x2C6970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C696Cu;
    // 0x2c6970: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9FA8u, 0x2C696Cu, 0x2C6974u)) {
        return;
    }
    ctx->pc = 0x2C6974u;
label_2c6974:
    // 0x2c6974: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c6974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c6978: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c6978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c697c:
    // 0x2c697c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c697cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c6980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c6984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6988: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6988u;
        // 0x2c698c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6990u;
}
