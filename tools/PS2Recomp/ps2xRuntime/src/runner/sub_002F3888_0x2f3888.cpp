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

// Function: sub_002F3888
// Address: 0x2f3888 - 0x2f3988
void sub_002F3888_0x2f3888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3888_0x2f3888");
#endif

    switch (ctx->pc) {
        case 0x2f38a4u: goto label_2f38a4;
        case 0x2f38c0u: goto label_2f38c0;
        case 0x2f38c8u: goto label_2f38c8;
        case 0x2f3950u: goto label_2f3950;
        case 0x2f3958u: goto label_2f3958;
        default: break;
    }

    ctx->pc = 0x2f3888u;

    // 0x2f3888: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f3888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f388c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f3890: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f3890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3894: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f3894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f3898: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f3898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f389c: 0xc0bdf7a  jal         func_2F7DE8
    ctx->pc = 0x2F389Cu;
    SET_GPR_U32(ctx, 31, 0x2F38A4u);
    ctx->pc = 0x2F38A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F389Cu;
    // 0x2f38a0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7DE8u, 0x2F389Cu, 0x2F38A4u)) {
        return;
    }
    ctx->pc = 0x2F38A4u;
label_2f38a4:
    // 0x2f38a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F38A4u;
    {
        const bool branch_taken_0x2f38a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38A4u;
        // 0x2f38a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38a4) {
            ctx->pc = 0x2F38B8u;
            goto label_2f38b8;
        }
    }
    ctx->pc = 0x2F38ACu;
    // 0x2f38ac: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f38acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f38b0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2F38B0u;
    {
        const bool branch_taken_0x2f38b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38B0u;
        // 0x2f38b4: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38b0) {
            ctx->pc = 0x2F3970u;
            goto label_2f3970;
        }
    }
    ctx->pc = 0x2F38B8u;
label_2f38b8:
    // 0x2f38b8: 0xc0bd946  jal         func_2F6518
    ctx->pc = 0x2F38B8u;
    SET_GPR_U32(ctx, 31, 0x2F38C0u);
    ctx->pc = 0x2F38BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F38B8u;
    // 0x2f38bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6518u, 0x2F38B8u, 0x2F38C0u)) {
        return;
    }
    ctx->pc = 0x2F38C0u;
label_2f38c0:
    // 0x2f38c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F38C0u;
    {
        const bool branch_taken_0x2f38c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38C0u;
        // 0x2f38c4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38c0) {
            ctx->pc = 0x2F38D4u;
            goto label_2f38d4;
        }
    }
    ctx->pc = 0x2F38C8u;
label_2f38c8:
    // 0x2f38c8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f38cc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2F38CCu;
    {
        const bool branch_taken_0x2f38cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38CCu;
        // 0x2f38d0: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38cc) {
            ctx->pc = 0x2F3970u;
            goto label_2f3970;
        }
    }
    ctx->pc = 0x2F38D4u;
label_2f38d4:
    // 0x2f38d4: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x2f38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f38d8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f38d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f38dc: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2f38dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f38e0: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f38e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2f38e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f38e8: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x2f38e8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f38ec: 0x2442b748  addiu       $v0, $v0, -0x48B8
    ctx->pc = 0x2f38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948680));
    // 0x2f38f0: 0x24490808  addiu       $t1, $v0, 0x808
    ctx->pc = 0x2f38f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2056));
    // 0x2f38f4: 0x3c0a006b  lui         $t2, 0x6B
    ctx->pc = 0x2f38f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)107 << 16));
    // 0x2f38f8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2f38f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f38fc: 0xac800894  sw          $zero, 0x894($a0)
    ctx->pc = 0x2f38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2196), GPR_U32(ctx, 0));
    // 0x2f3900: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f3900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3904: 0xaca80800  sw          $t0, 0x800($a1)
    ctx->pc = 0x2f3904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2048), GPR_U32(ctx, 8));
    // 0x2f3908: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f3908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f390c: 0xacc80804  sw          $t0, 0x804($a2)
    ctx->pc = 0x2f390cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2052), GPR_U32(ctx, 8));
    // 0x2f3910: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f3910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3914: 0xac800890  sw          $zero, 0x890($a0)
    ctx->pc = 0x2f3914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2192), GPR_U32(ctx, 0));
    // 0x2f3918: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2f3918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2f391c: 0xac40088c  sw          $zero, 0x88C($v0)
    ctx->pc = 0x2f391cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2188), GPR_U32(ctx, 0));
    // 0x2f3920: 0x25460158  addiu       $a2, $t2, 0x158
    ctx->pc = 0x2f3920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 344));
    // 0x2f3924: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2f3924u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6B0158u));
    // 0x2f3928: 0x80c40001  lb          $a0, 0x1($a2)
    ctx->pc = 0x2f3928u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x6B0159u));
    // 0x2f392c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2f392cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f3930: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2f3930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f3934: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3934u;
    {
        const bool branch_taken_0x2f3934 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3934) {
            ctx->pc = 0x2F3938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3934u;
            // 0x2f3938: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F393Cu;
            goto label_2f393c;
        }
    }
    ctx->pc = 0x2F393Cu;
label_2f393c:
    // 0x2f393c: 0x8812  mflo        $s1
    ctx->pc = 0x2f393cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2f3940: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F3940u;
    {
        const bool branch_taken_0x2f3940 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2F3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3940u;
        // 0x2f3944: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3940) {
            ctx->pc = 0x2F396Cu;
            goto label_2f396c;
        }
    }
    ctx->pc = 0x2F3948u;
    // 0x2f3948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f394c: 0x0  nop
    ctx->pc = 0x2f394cu;
    // NOP
label_2f3950:
    // 0x2f3950: 0xc0bdf2e  jal         func_2F7CB8
    ctx->pc = 0x2F3950u;
    SET_GPR_U32(ctx, 31, 0x2F3958u);
    ctx->pc = 0x2F3954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3950u;
    // 0x2f3954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7CB8u, 0x2F3950u, 0x2F3958u)) {
        return;
    }
    ctx->pc = 0x2F3958u;
label_2f3958:
    // 0x2f3958: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2F3958u;
    {
        const bool branch_taken_0x2f3958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3958u;
        // 0x2f395c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3958) {
            ctx->pc = 0x2F38C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f38c8;
        }
    }
    ctx->pc = 0x2F3960u;
    // 0x2f3960: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2f3960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f3964: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F3964u;
    {
        const bool branch_taken_0x2f3964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3964u;
        // 0x2f3968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3964) {
            ctx->pc = 0x2F3950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3950;
        }
    }
    ctx->pc = 0x2F396Cu;
label_2f396c:
    // 0x2f396c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f396cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3970:
    // 0x2f3970: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f3970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3974: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f3974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3978: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f3978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f397c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f397cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3980: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3980u;
        // 0x2f3984: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3988u;
}
