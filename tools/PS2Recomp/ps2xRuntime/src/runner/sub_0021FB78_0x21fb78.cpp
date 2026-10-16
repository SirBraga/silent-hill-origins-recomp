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

// Function: sub_0021FB78
// Address: 0x21fb78 - 0x21fca8
void sub_0021FB78_0x21fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FB78_0x21fb78");
#endif

    switch (ctx->pc) {
        case 0x21fbb0u: goto label_21fbb0;
        case 0x21fc38u: goto label_21fc38;
        default: break;
    }

    ctx->pc = 0x21fb78u;

    // 0x21fb78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fb7c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x21fb7cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21fb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21fb84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21fb84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb88: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x21fb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x21fb8c: 0x8da20024  lw          $v0, 0x24($t5)
    ctx->pc = 0x21fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
    // 0x21fb90: 0x8db801a8  lw          $t8, 0x1A8($t5)
    ctx->pc = 0x21fb90u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 424)));
    // 0x21fb94: 0x8da4013c  lw          $a0, 0x13C($t5)
    ctx->pc = 0x21fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 316)));
    // 0x21fb98: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x21FB98u;
    {
        const bool branch_taken_0x21fb98 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB98u;
        // 0x21fb9c: 0x8da500d8  lw          $a1, 0xD8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb98) {
            ctx->pc = 0x21FC94u;
            goto label_21fc94;
        }
    }
    ctx->pc = 0x21FBA0u;
    // 0x21fba0: 0x24900002  addiu       $s0, $a0, 0x2
    ctx->pc = 0x21fba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x21fba4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21fba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fba8: 0x24990001  addiu       $t9, $a0, 0x1
    ctx->pc = 0x21fba8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21fbac: 0x0  nop
    ctx->pc = 0x21fbacu;
    // NOP
label_21fbb0:
    // 0x21fbb0: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x21fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x21fbb4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x21fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21fbb8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x21fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21fbbc: 0x246f0001  addiu       $t7, $v1, 0x1
    ctx->pc = 0x21fbbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21fbc0: 0x8da3013c  lw          $v1, 0x13C($t5)
    ctx->pc = 0x21fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 316)));
    // 0x21fbc4: 0x24ae0054  addiu       $t6, $a1, 0x54
    ctx->pc = 0x21fbc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x21fbc8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x21fbc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21fbcc: 0x50710001  beql        $v1, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x21FBCCu;
    {
        const bool branch_taken_0x21fbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x21fbcc) {
            ctx->pc = 0x21FBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FBCCu;
            // 0x21fbd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FBD4u;
            goto label_21fbd4;
        }
    }
    ctx->pc = 0x21FBD4u;
label_21fbd4:
    // 0x21fbd4: 0x8f020038  lw          $v0, 0x38($t8)
    ctx->pc = 0x21fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 56)));
    // 0x21fbd8: 0x8f05003c  lw          $a1, 0x3C($t8)
    ctx->pc = 0x21fbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 60)));
    // 0x21fbdc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x21fbdcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21fbe0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x21fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21fbe4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x21fbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x21fbe8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x21fbe8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21fbec: 0x3812  mflo        $a3
    ctx->pc = 0x21fbecu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x21fbf0: 0x18e00023  blez        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x21FBF0u;
    {
        const bool branch_taken_0x21fbf0 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x21FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBF0u;
        // 0x21fbf4: 0x8ccc0000  lw          $t4, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbf0) {
            ctx->pc = 0x21FC80u;
            goto label_21fc80;
        }
    }
    ctx->pc = 0x21FBF8u;
    // 0x21fbf8: 0xf92018  mult        $a0, $a3, $t9
    ctx->pc = 0x21fbf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21fbfc: 0xf01018  mult        $v0, $a3, $s0
    ctx->pc = 0x21fbfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21fc00: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x21fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x21fc04: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x21fc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc08: 0x31823  negu        $v1, $v1
    ctx->pc = 0x21fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x21fc0c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x21fc0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc10: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x21fc10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc14: 0x655821  addu        $t3, $v1, $a1
    ctx->pc = 0x21fc14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21fc18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21fc1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21fc20: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x21fc20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21fc24: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x21fc24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x21fc28: 0x4c3021  addu        $a2, $v0, $t4
    ctx->pc = 0x21fc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x21fc2c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x21fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x21fc30: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x21fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x21fc34: 0x0  nop
    ctx->pc = 0x21fc34u;
    // NOP
label_21fc38:
    // 0x21fc38: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21fc3c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x21fc3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x21fc40: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x21fc40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x21fc44: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x21fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x21fc48: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x21fc48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x21fc4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21fc50: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x21fc54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x21fc58: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21fc5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21fc60: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x21fc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x21fc64: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x21fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x21fc68: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x21fc68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x21fc6c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x21fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21fc70: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x21fc70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x21fc74: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x21fc78: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21FC78u;
    {
        const bool branch_taken_0x21fc78 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC78u;
        // 0x21fc7c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc78) {
            ctx->pc = 0x21FC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fc38;
        }
    }
    ctx->pc = 0x21FC80u;
label_21fc80:
    // 0x21fc80: 0x8da20024  lw          $v0, 0x24($t5)
    ctx->pc = 0x21fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
    // 0x21fc84: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x21fc84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc88: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x21fc88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21fc8c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x21FC8Cu;
    {
        const bool branch_taken_0x21fc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC8Cu;
        // 0x21fc90: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc8c) {
            ctx->pc = 0x21FBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fbb0;
        }
    }
    ctx->pc = 0x21FC94u;
label_21fc94:
    // 0x21fc94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21fc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fc98: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x21fc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC9Cu;
        // 0x21fca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FCA4u;
    // 0x21fca4: 0x0  nop
    ctx->pc = 0x21fca4u;
    // NOP
    ctx->pc = 0x21fca8u;
}
