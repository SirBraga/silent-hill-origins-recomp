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

// Function: sub_00210230
// Address: 0x210230 - 0x210390
void sub_00210230_0x210230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210230_0x210230");
#endif

    switch (ctx->pc) {
        case 0x210258u: goto label_210258;
        case 0x210278u: goto label_210278;
        case 0x210290u: goto label_210290;
        case 0x2102e0u: goto label_2102e0;
        case 0x210310u: goto label_210310;
        case 0x210330u: goto label_210330;
        default: break;
    }

    ctx->pc = 0x210230u;

    // 0x210230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x210234: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21023c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21023cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210240: 0x8c8201cc  lw          $v0, 0x1CC($a0)
    ctx->pc = 0x210240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x210244: 0x8c8f0078  lw          $t7, 0x78($a0)
    ctx->pc = 0x210244u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x210248: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x210248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x21024c: 0x18e00021  blez        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x21024Cu;
    {
        const bool branch_taken_0x21024c = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x210250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21024Cu;
        // 0x210250: 0x8c590018  lw          $t9, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21024c) {
            ctx->pc = 0x2102D4u;
            goto label_2102d4;
        }
    }
    ctx->pc = 0x210254u;
    // 0x210254: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x210254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_210258:
    // 0x210258: 0x24780001  addiu       $t8, $v1, 0x1
    ctx->pc = 0x210258u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21025c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x210260: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x210260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x210264: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x210264u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210268: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x210268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21026c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21026Cu;
    {
        const bool branch_taken_0x21026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21026Cu;
        // 0x210270: 0x8c6c0000  lw          $t4, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21026c) {
            ctx->pc = 0x2102C4u;
            goto label_2102c4;
        }
    }
    ctx->pc = 0x210274u;
    // 0x210274: 0x0  nop
    ctx->pc = 0x210274u;
    // NOP
label_210278:
    // 0x210278: 0x244effff  addiu       $t6, $v0, -0x1
    ctx->pc = 0x210278u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21027c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21027cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210280: 0x19e0000c  blez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x210280u;
    {
        const bool branch_taken_0x210280 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x210284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210280u;
        // 0x210284: 0x258d0001  addiu       $t5, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210280) {
            ctx->pc = 0x2102B4u;
            goto label_2102b4;
        }
    }
    ctx->pc = 0x210288u;
    // 0x210288: 0x320482d  daddu       $t1, $t9, $zero
    ctx->pc = 0x210288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21028c: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x21028cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_210290:
    // 0x210290: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x210290u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x210294: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x210294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x210298: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x210298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x21029c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x21029cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2102a0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2102a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2102a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2102a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2102a8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2102a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2102ac: 0x1500fff8  bnez        $t0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2102ACu;
    {
        const bool branch_taken_0x2102ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2102B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102ACu;
        // 0x2102b0: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102ac) {
            ctx->pc = 0x210290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210290;
        }
    }
    ctx->pc = 0x2102B4u;
label_2102b4:
    // 0x2102b4: 0xa18a0000  sb          $t2, 0x0($t4)
    ctx->pc = 0x2102b4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x2102b8: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x2102b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102bc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2102BCu;
    {
        const bool branch_taken_0x2102bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2102C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102BCu;
        // 0x2102c0: 0x1a0602d  daddu       $t4, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102bc) {
            ctx->pc = 0x210278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210278;
        }
    }
    ctx->pc = 0x2102C4u;
label_2102c4:
    // 0x2102c4: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x2102c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102c8: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x2102c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2102cc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2102CCu;
    {
        const bool branch_taken_0x2102cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2102D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102CCu;
        // 0x2102d0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102cc) {
            ctx->pc = 0x210258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210258;
        }
    }
    ctx->pc = 0x2102D4u;
label_2102d4:
    // 0x2102d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2102d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2102d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2102D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2102DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102D8u;
        // 0x2102dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2102D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2102E0u;
label_2102e0:
    // 0x2102e0: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x2102e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x2102e4: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x2102e4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102e8: 0x8c980070  lw          $t8, 0x70($a0)
    ctx->pc = 0x2102e8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2102ec: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x2102ecu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102f0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2102f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2102f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2102f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102f8: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x2102f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2102fc: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x2102fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210300: 0x18e00021  blez        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x210300u;
    {
        const bool branch_taken_0x210300 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x210304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210300u;
        // 0x210304: 0x8c4c0004  lw          $t4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210300) {
            ctx->pc = 0x210388u;
            goto label_210388;
        }
    }
    ctx->pc = 0x210308u;
    // 0x210308: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x210308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21030c: 0x0  nop
    ctx->pc = 0x21030cu;
    // NOP
label_210310:
    // 0x210310: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x210310u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x210314: 0x4f1821  addu        $v1, $v0, $t7
    ctx->pc = 0x210314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x210318: 0x300482d  daddu       $t1, $t8, $zero
    ctx->pc = 0x210318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21031c: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x21031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x210320: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x210320u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210324: 0x11200014  beqz        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x210324u;
    {
        const bool branch_taken_0x210324 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x210328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210324u;
        // 0x210328: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210324) {
            ctx->pc = 0x210378u;
            goto label_210378;
        }
    }
    ctx->pc = 0x21032Cu;
    // 0x21032c: 0x0  nop
    ctx->pc = 0x21032cu;
    // NOP
label_210330:
    // 0x210330: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x210330u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x210334: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x210334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x210338: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x210338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21033c: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x21033cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x210340: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x210340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x210344: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x210344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x210348: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x210348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21034c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x21034cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x210350: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x210350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x210354: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x210354u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210358: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x210358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21035c: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x21035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x210360: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x210360u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210364: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x210364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x210368: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x210368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21036c: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x21036cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x210370: 0x1520ffef  bnez        $t1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x210370u;
    {
        const bool branch_taken_0x210370 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x210374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210370u;
        // 0x210374: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210370) {
            ctx->pc = 0x210330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210330;
        }
    }
    ctx->pc = 0x210378u;
label_210378:
    // 0x210378: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x210378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21037c: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x21037cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x210380: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x210380u;
    {
        const bool branch_taken_0x210380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210380u;
        // 0x210384: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210380) {
            ctx->pc = 0x210310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210310;
        }
    }
    ctx->pc = 0x210388u;
label_210388:
    // 0x210388: 0x3e00008  jr          $ra
    ctx->pc = 0x210388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210390u;
}
