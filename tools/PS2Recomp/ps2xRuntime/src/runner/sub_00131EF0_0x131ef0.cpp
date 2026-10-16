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

// Function: sub_00131EF0
// Address: 0x131ef0 - 0x131fe8
void sub_00131EF0_0x131ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131EF0_0x131ef0");
#endif

    switch (ctx->pc) {
        case 0x131f08u: goto label_131f08;
        case 0x131f88u: goto label_131f88;
        case 0x131f94u: goto label_131f94;
        case 0x131fa8u: goto label_131fa8;
        case 0x131fb4u: goto label_131fb4;
        case 0x131fccu: goto label_131fcc;
        case 0x131fd4u: goto label_131fd4;
        default: break;
    }

    ctx->pc = 0x131ef0u;

    // 0x131ef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x131ef4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x131ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x131ef8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x131ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x131efc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131f00: 0xc049ae6  jal         func_126B98
    ctx->pc = 0x131F00u;
    SET_GPR_U32(ctx, 31, 0x131F08u);
    ctx->pc = 0x131F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F00u;
    // 0x131f04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126B98u, 0x131F00u, 0x131F08u)) {
        return;
    }
    ctx->pc = 0x131F08u;
label_131f08:
    // 0x131f08: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x131f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x131f0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131f10: 0x8c439168  lw          $v1, -0x6E98($v0)
    ctx->pc = 0x131f10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339168u));
    // 0x131f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f18: 0xac640248  sw          $a0, 0x248($v1)
    ctx->pc = 0x131f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 584), GPR_U32(ctx, 4));
    // 0x131f1c: 0x8e221b74  lw          $v0, 0x1B74($s1)
    ctx->pc = 0x131f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7028)));
    // 0x131f20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x131F20u;
    {
        const bool branch_taken_0x131f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F20u;
        // 0x131f24: 0xc6210be0  lwc1        $f1, 0xBE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f20) {
            ctx->pc = 0x131F3Cu;
            goto label_131f3c;
        }
    }
    ctx->pc = 0x131F28u;
    // 0x131f28: 0x8e221b78  lw          $v0, 0x1B78($s1)
    ctx->pc = 0x131f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7032)));
    // 0x131f2c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x131F2Cu;
    {
        const bool branch_taken_0x131f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F2Cu;
        // 0x131f30: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f2c) {
            ctx->pc = 0x131F78u;
            goto label_131f78;
        }
    }
    ctx->pc = 0x131F34u;
    // 0x131f34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x131F34u;
    {
        const bool branch_taken_0x131f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F34u;
        // 0x131f38: 0x2445dcf0  addiu       $a1, $v0, -0x2310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f34) {
            ctx->pc = 0x131F78u;
            goto label_131f78;
        }
    }
    ctx->pc = 0x131F3Cu;
label_131f3c:
    // 0x131f3c: 0x8e221980  lw          $v0, 0x1980($s1)
    ctx->pc = 0x131f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6528)));
    // 0x131f40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131F40u;
    {
        const bool branch_taken_0x131f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F40u;
        // 0x131f44: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f40) {
            ctx->pc = 0x131F54u;
            goto label_131f54;
        }
    }
    ctx->pc = 0x131F48u;
    // 0x131f48: 0xae201980  sw          $zero, 0x1980($s1)
    ctx->pc = 0x131f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6528), GPR_U32(ctx, 0));
    // 0x131f4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x131F4Cu;
    {
        const bool branch_taken_0x131f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F4Cu;
        // 0x131f50: 0x2445dd00  addiu       $a1, $v0, -0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f4c) {
            ctx->pc = 0x131F78u;
            goto label_131f78;
        }
    }
    ctx->pc = 0x131F54u;
label_131f54:
    // 0x131f54: 0xc620194c  lwc1        $f0, 0x194C($s1)
    ctx->pc = 0x131f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x131f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131f5c: 0x0  nop
    ctx->pc = 0x131f5cu;
    // NOP
    // 0x131f60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x131F60u;
    {
        const bool branch_taken_0x131f60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F60u;
        // 0x131f64: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f60) {
            ctx->pc = 0x131F70u;
            goto label_131f70;
        }
    }
    ctx->pc = 0x131F68u;
    // 0x131f68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x131F68u;
    {
        const bool branch_taken_0x131f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F68u;
        // 0x131f6c: 0x2445dd18  addiu       $a1, $v0, -0x22E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f68) {
            ctx->pc = 0x131F78u;
            goto label_131f78;
        }
    }
    ctx->pc = 0x131F70u;
label_131f70:
    // 0x131f70: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x131f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x131f74: 0x2445dcf0  addiu       $a1, $v0, -0x2310
    ctx->pc = 0x131f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958320));
label_131f78:
    // 0x131f78: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x131F78u;
    {
        const bool branch_taken_0x131f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x131f78) {
            ctx->pc = 0x131F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131F78u;
            // 0x131f7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131F8Cu;
            goto label_131f8c;
        }
    }
    ctx->pc = 0x131F80u;
    // 0x131f80: 0xc0490b0  jal         func_1242C0
    ctx->pc = 0x131F80u;
    SET_GPR_U32(ctx, 31, 0x131F88u);
    ctx->pc = 0x131F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F80u;
    // 0x131f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1242C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1242C0u, 0x131F80u, 0x131F88u)) {
        return;
    }
    ctx->pc = 0x131F88u;
label_131f88:
    // 0x131f88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x131f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_131f8c:
    // 0x131f8c: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x131F8Cu;
    SET_GPR_U32(ctx, 31, 0x131F94u);
    ctx->pc = 0x131F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F8Cu;
    // 0x131f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x131F8Cu, 0x131F94u)) {
        return;
    }
    ctx->pc = 0x131F94u;
label_131f94:
    // 0x131f94: 0x26300310  addiu       $s0, $s1, 0x310
    ctx->pc = 0x131f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x131f98: 0x8e250ec4  lw          $a1, 0xEC4($s1)
    ctx->pc = 0x131f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3780)));
    // 0x131f9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x131f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fa0: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x131FA0u;
    SET_GPR_U32(ctx, 31, 0x131FA8u);
    ctx->pc = 0x131FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131FA0u;
    // 0x131fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x131FA0u, 0x131FA8u)) {
        return;
    }
    ctx->pc = 0x131FA8u;
label_131fa8:
    // 0x131fa8: 0x8e2514d8  lw          $a1, 0x14D8($s1)
    ctx->pc = 0x131fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5336)));
    // 0x131fac: 0xc043c88  jal         func_10F220
    ctx->pc = 0x131FACu;
    SET_GPR_U32(ctx, 31, 0x131FB4u);
    ctx->pc = 0x131FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131FACu;
    // 0x131fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F220u, 0x131FACu, 0x131FB4u)) {
        return;
    }
    ctx->pc = 0x131FB4u;
label_131fb4:
    // 0x131fb4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x131fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x131fb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131fbc: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x131fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x131fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fc4: 0xc043642  jal         func_10D908
    ctx->pc = 0x131FC4u;
    SET_GPR_U32(ctx, 31, 0x131FCCu);
    ctx->pc = 0x131FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131FC4u;
    // 0x131fc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x131FC4u, 0x131FCCu)) {
        return;
    }
    ctx->pc = 0x131FCCu;
label_131fcc:
    // 0x131fcc: 0xc04df10  jal         func_137C40
    ctx->pc = 0x131FCCu;
    SET_GPR_U32(ctx, 31, 0x131FD4u);
    ctx->pc = 0x131FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131FCCu;
    // 0x131fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137C40u, 0x131FCCu, 0x131FD4u)) {
        return;
    }
    ctx->pc = 0x131FD4u;
label_131fd4:
    // 0x131fd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x131fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131fd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x131fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x131FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FE0u;
        // 0x131fe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131FE8u;
}
