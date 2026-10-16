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

// Function: sub_001045D0
// Address: 0x1045d0 - 0x104738
void sub_001045D0_0x1045d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001045D0_0x1045d0");
#endif

    switch (ctx->pc) {
        case 0x104630u: goto label_104630;
        case 0x104650u: goto label_104650;
        case 0x104678u: goto label_104678;
        case 0x104694u: goto label_104694;
        case 0x1046b4u: goto label_1046b4;
        case 0x1046d4u: goto label_1046d4;
        default: break;
    }

    ctx->pc = 0x1045d0u;

    // 0x1045d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1045d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1045d4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1045d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1045d8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1045d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1045dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1045dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045e0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1045e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1045e4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1045e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1045e8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1045e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1045ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1045ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1045f0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1045f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1045f4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1045f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1045f8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1045f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1045fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1045fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104600: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x104600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x104604: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x104604u;
    {
        const bool branch_taken_0x104604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104604u;
        // 0x104608: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104604) {
            ctx->pc = 0x104708u;
            goto label_104708;
        }
    }
    ctx->pc = 0x10460Cu;
    // 0x10460c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10460cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x104610: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x104610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x104614: 0x8c558bc4  lw          $s5, -0x743C($v0)
    ctx->pc = 0x104614u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x338BC4u));
    // 0x104618: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x104618u;
    {
        const bool branch_taken_0x104618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104618u;
        // 0x10461c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104618) {
            ctx->pc = 0x104700u;
            goto label_104700;
        }
    }
    ctx->pc = 0x104620u;
    // 0x104620: 0x241e000c  addiu       $fp, $zero, 0xC
    ctx->pc = 0x104620u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x104624: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x104624u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x104628: 0xbe1818  mult        $v1, $a1, $fp
    ctx->pc = 0x104628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10462c: 0x0  nop
    ctx->pc = 0x10462cu;
    // NOP
label_104630:
    // 0x104630: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x104630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x104634: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x104634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104638: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x104638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10463c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104640: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x104640u;
    {
        const bool branch_taken_0x104640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104640u;
        // 0x104644: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104640) {
            ctx->pc = 0x1046ECu;
            goto label_1046ec;
        }
    }
    ctx->pc = 0x104648u;
    // 0x104648: 0xb78818  mult        $s1, $a1, $s7
    ctx->pc = 0x104648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x10464c: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x10464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_104650:
    // 0x104650: 0x1381c0  sll         $s0, $s3, 7
    ctx->pc = 0x104650u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x104654: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x104654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x104658: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x104658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10465c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x10465cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x104660: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x104660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104664: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x104664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x104668: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x104668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10466c: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x10466cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x104670: 0xc066552  jal         func_199548
    ctx->pc = 0x104670u;
    SET_GPR_U32(ctx, 31, 0x104678u);
    ctx->pc = 0x104674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104670u;
    // 0x104674: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199548u, 0x104670u, 0x104678u)) {
        return;
    }
    ctx->pc = 0x104678u;
label_104678:
    // 0x104678: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x104678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x10467c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x104680: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x104680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x104684: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x104684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x104688: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x104688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x10468c: 0xc0ab4d4  jal         func_2AD350
    ctx->pc = 0x10468Cu;
    SET_GPR_U32(ctx, 31, 0x104694u);
    ctx->pc = 0x104690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10468Cu;
    // 0x104690: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD350u, 0x10468Cu, 0x104694u)) {
        return;
    }
    ctx->pc = 0x104694u;
label_104694:
    // 0x104694: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x104694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x104698: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10469c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x10469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1046a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1046a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1046a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1046a8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x1046a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1046ac: 0xc0ab42e  jal         func_2AD0B8
    ctx->pc = 0x1046ACu;
    SET_GPR_U32(ctx, 31, 0x1046B4u);
    ctx->pc = 0x1046B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1046ACu;
    // 0x1046b0: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x1046ACu, 0x1046B4u)) {
        return;
    }
    ctx->pc = 0x1046B4u;
label_1046b4:
    // 0x1046b4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1046b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1046b8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1046b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1046bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1046bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1046c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1046c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1046c4: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1046c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1046c8: 0x96060078  lhu         $a2, 0x78($s0)
    ctx->pc = 0x1046c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1046cc: 0xc0ab3b8  jal         func_2ACEE0
    ctx->pc = 0x1046CCu;
    SET_GPR_U32(ctx, 31, 0x1046D4u);
    ctx->pc = 0x1046D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1046CCu;
    // 0x1046d0: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x1046CCu, 0x1046D4u)) {
        return;
    }
    ctx->pc = 0x1046D4u;
label_1046d4:
    // 0x1046d4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1046d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1046d8: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x1046d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1046dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1046dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1046e0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1046e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1046e4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1046E4u;
    {
        const bool branch_taken_0x1046e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1046E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046E4u;
        // 0x1046e8: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046e4) {
            ctx->pc = 0x104650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104650;
        }
    }
    ctx->pc = 0x1046ECu;
label_1046ec:
    // 0x1046ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1046ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1046f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1046f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046f4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1046f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1046f8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1046F8u;
    {
        const bool branch_taken_0x1046f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1046FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046F8u;
        // 0x1046fc: 0xbe1818  mult        $v1, $a1, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046f8) {
            ctx->pc = 0x104630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104630;
        }
    }
    ctx->pc = 0x104700u;
label_104700:
    // 0x104700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104704: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x104704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_104708:
    // 0x104708: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x104708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10470c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x10470cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x104710: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x104710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104714: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x104714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104718: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x104718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10471c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x10471cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104720: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x104720u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104724: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x104724u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104728: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x104728u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10472c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104730: 0x3e00008  jr          $ra
    ctx->pc = 0x104730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104730u;
        // 0x104734: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104738u;
}
