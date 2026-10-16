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

// Function: sub_0022DA28
// Address: 0x22da28 - 0x22dcd8
void sub_0022DA28_0x22da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DA28_0x22da28");
#endif

    switch (ctx->pc) {
        case 0x22daf4u: goto label_22daf4;
        case 0x22db14u: goto label_22db14;
        case 0x22dcb0u: goto label_22dcb0;
        default: break;
    }

    ctx->pc = 0x22da28u;

    // 0x22da28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22da28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22da2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22da30: 0x24423f14  addiu       $v0, $v0, 0x3F14
    ctx->pc = 0x22da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16148));
    // 0x22da34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22da34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22da38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22da3c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22da40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22da40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22da44: 0x39c9024  and         $s2, $gp, $gp
    ctx->pc = 0x22da44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 28) & GPR_U64(ctx, 28));
    // 0x22da48: 0x8c5c0000  lw          $gp, 0x0($v0)
    ctx->pc = 0x22da48u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22da4c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22da4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22da50: 0x90a53f09  lbu         $a1, 0x3F09($a1)
    ctx->pc = 0x22da50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x6B3F09u));
    // 0x22da54: 0x93838404  lbu         $v1, -0x7BFC($gp)
    ctx->pc = 0x22da54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935556)));
    // 0x22da58: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x22da58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22da5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22DA5Cu;
    {
        const bool branch_taken_0x22da5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA5Cu;
        // 0x22da60: 0x2c6200ff  sltiu       $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da5c) {
            ctx->pc = 0x22DA88u;
            goto label_22da88;
        }
    }
    ctx->pc = 0x22DA64u;
    // 0x22da64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DA64u;
    {
        const bool branch_taken_0x22da64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA64u;
        // 0x22da68: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da64) {
            ctx->pc = 0x22DA74u;
            goto label_22da74;
        }
    }
    ctx->pc = 0x22DA6Cu;
    // 0x22da6c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22da6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22da70: 0xa0223f09  sb          $v0, 0x3F09($at)
    ctx->pc = 0x22da70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F09u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B3F09u, _value); } while (0);
label_22da74:
    // 0x22da74: 0x252e024  and         $gp, $s2, $s2
    ctx->pc = 0x22da74u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) & GPR_U64(ctx, 18));
    // 0x22da78: 0xf  sync
    ctx->pc = 0x22da78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22da7c: 0x42000038  ei
    ctx->pc = 0x22da7cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x22da80: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x22DA80u;
    {
        const bool branch_taken_0x22da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA80u;
        // 0x22da84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da80) {
            ctx->pc = 0x22DCC0u;
            goto label_22dcc0;
        }
    }
    ctx->pc = 0x22DA88u;
label_22da88:
    // 0x22da88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22da8c: 0x14820088  bne         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x22DA8Cu;
    {
        const bool branch_taken_0x22da8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x22da8c) {
            ctx->pc = 0x22DCB0u;
            goto label_22dcb0;
        }
    }
    ctx->pc = 0x22DA94u;
    // 0x22da94: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22da94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22da98: 0x9042415c  lbu         $v0, 0x415C($v0)
    ctx->pc = 0x22da98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B415Cu));
    // 0x22da9c: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x22DA9Cu;
    {
        const bool branch_taken_0x22da9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA9Cu;
        // 0x22daa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da9c) {
            ctx->pc = 0x22DCB0u;
            goto label_22dcb0;
        }
    }
    ctx->pc = 0x22DAA4u;
    // 0x22daa4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22daa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22daa8: 0xa020415c  sb          $zero, 0x415C($at)
    ctx->pc = 0x22daa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B415Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B415Cu, _value); } while (0);
    // 0x22daac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22daacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dab0: 0xa0223f09  sb          $v0, 0x3F09($at)
    ctx->pc = 0x22dab0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F09u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B3F09u, _value); } while (0);
    // 0x22dab4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x22dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x22dab8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x22dab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x22dabc: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x22dabcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x22dac0: 0x8e103efc  lw          $s0, 0x3EFC($s0)
    ctx->pc = 0x22dac0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6B3EFCu));
    // 0x22dac4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x22dac4u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x22dac8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x22dac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x22dacc: 0x30510002  andi        $s1, $v0, 0x2
    ctx->pc = 0x22daccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22dad0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x22DAD0u;
    {
        const bool branch_taken_0x22dad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAD0u;
        // 0x22dad4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dad0) {
            ctx->pc = 0x22DAFCu;
            goto label_22dafc;
        }
    }
    ctx->pc = 0x22DAD8u;
    // 0x22dad8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22dadc: 0x90844130  lbu         $a0, 0x4130($a0)
    ctx->pc = 0x22dadcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x6B4130u));
    // 0x22dae0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x22dae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x22dae4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x22dae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22dae8: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x22dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x22daec: 0xc0a52a0  jal         func_294A80
    ctx->pc = 0x22DAECu;
    SET_GPR_U32(ctx, 31, 0x22DAF4u);
    ctx->pc = 0x22DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DAECu;
    // 0x22daf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294A80u, 0x22DAECu, 0x22DAF4u)) {
        return;
    }
    ctx->pc = 0x22DAF4u;
label_22daf4:
    // 0x22daf4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22DAF4u;
    {
        const bool branch_taken_0x22daf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAF4u;
        // 0x22daf8: 0x938290c0  lbu         $v0, -0x6F40($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22daf4) {
            ctx->pc = 0x22DB1Cu;
            goto label_22db1c;
        }
    }
    ctx->pc = 0x22DAFCu;
label_22dafc:
    // 0x22dafc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22db00: 0x90844130  lbu         $a0, 0x4130($a0)
    ctx->pc = 0x22db00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x6B4130u));
    // 0x22db04: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x22db04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x22db08: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x22db08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22db0c: 0xc0a52a0  jal         func_294A80
    ctx->pc = 0x22DB0Cu;
    SET_GPR_U32(ctx, 31, 0x22DB14u);
    ctx->pc = 0x22DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB0Cu;
    // 0x22db10: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294A80u, 0x22DB0Cu, 0x22DB14u)) {
        return;
    }
    ctx->pc = 0x22DB14u;
label_22db14:
    // 0x22db14: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22db14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22db18: 0x90424130  lbu         $v0, 0x4130($v0)
    ctx->pc = 0x22db18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B4130u));
label_22db1c:
    // 0x22db1c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22DB1Cu;
    {
        const bool branch_taken_0x22db1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22db1c) {
            ctx->pc = 0x22DB64u;
            goto label_22db64;
        }
    }
    ctx->pc = 0x22DB24u;
    // 0x22db24: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22DB24u;
    {
        const bool branch_taken_0x22db24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB24u;
        // 0x22db28: 0x3c031200  lui         $v1, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db24) {
            ctx->pc = 0x22DB48u;
            goto label_22db48;
        }
    }
    ctx->pc = 0x22DB2Cu;
    // 0x22db2c: 0xde0403b0  ld          $a0, 0x3B0($s0)
    ctx->pc = 0x22db2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x22db30: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x22db30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x22db34: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x22db34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x22db38: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x22db38u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 4));
    // 0x22db3c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x22db3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x22db40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22DB40u;
    {
        const bool branch_taken_0x22db40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB40u;
        // 0x22db44: 0xde0203b8  ld          $v0, 0x3B8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db40) {
            ctx->pc = 0x22DBA0u;
            goto label_22dba0;
        }
    }
    ctx->pc = 0x22DB48u;
label_22db48:
    // 0x22db48: 0xde040340  ld          $a0, 0x340($s0)
    ctx->pc = 0x22db48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x22db4c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x22db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x22db50: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x22db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x22db54: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x22db54u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 4));
    // 0x22db58: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x22db58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x22db5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22DB5Cu;
    {
        const bool branch_taken_0x22db5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB5Cu;
        // 0x22db60: 0xde020348  ld          $v0, 0x348($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db5c) {
            ctx->pc = 0x22DBA0u;
            goto label_22dba0;
        }
    }
    ctx->pc = 0x22DB64u;
label_22db64:
    // 0x22db64: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22DB64u;
    {
        const bool branch_taken_0x22db64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB64u;
        // 0x22db68: 0x3c021200  lui         $v0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db64) {
            ctx->pc = 0x22DB88u;
            goto label_22db88;
        }
    }
    ctx->pc = 0x22DB6Cu;
    // 0x22db6c: 0xde0403a0  ld          $a0, 0x3A0($s0)
    ctx->pc = 0x22db6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x22db70: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x22db70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x22db74: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x22db74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x22db78: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x22db78u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x22db7c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x22db7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x22db80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22DB80u;
    {
        const bool branch_taken_0x22db80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB80u;
        // 0x22db84: 0xde0203a8  ld          $v0, 0x3A8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db80) {
            ctx->pc = 0x22DBA0u;
            goto label_22dba0;
        }
    }
    ctx->pc = 0x22DB88u;
label_22db88:
    // 0x22db88: 0xde040330  ld          $a0, 0x330($s0)
    ctx->pc = 0x22db88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x22db8c: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x22db8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x22db90: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x22db90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x22db94: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x22db94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x22db98: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x22db98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x22db9c: 0xde020338  ld          $v0, 0x338($s0)
    ctx->pc = 0x22db9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 824)));
label_22dba0:
    // 0x22dba0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x22dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x22dba4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22dba8: 0x90424131  lbu         $v0, 0x4131($v0)
    ctx->pc = 0x22dba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B4131u));
    // 0x22dbac: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x22DBACu;
    {
        const bool branch_taken_0x22dbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBACu;
        // 0x22dbb0: 0x938290c0  lbu         $v0, -0x6F40($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbac) {
            ctx->pc = 0x22DC48u;
            goto label_22dc48;
        }
    }
    ctx->pc = 0x22DBB4u;
    // 0x22dbb4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DBB4u;
    {
        const bool branch_taken_0x22dbb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBB4u;
        // 0x22dbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbb4) {
            ctx->pc = 0x22DBCCu;
            goto label_22dbcc;
        }
    }
    ctx->pc = 0x22DBBCu;
    // 0x22dbbc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22dbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dbc0: 0xa0204132  sb          $zero, 0x4132($at)
    ctx->pc = 0x22dbc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4132u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B4132u, _value); } while (0);
    // 0x22dbc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22DBC4u;
    {
        const bool branch_taken_0x22dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBC4u;
        // 0x22dbc8: 0x938290c0  lbu         $v0, -0x6F40($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbc4) {
            ctx->pc = 0x22DBDCu;
            goto label_22dbdc;
        }
    }
    ctx->pc = 0x22DBCCu;
label_22dbcc:
    // 0x22dbcc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22dbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dbd0: 0xa0224132  sb          $v0, 0x4132($at)
    ctx->pc = 0x22dbd0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4132u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B4132u, _value); } while (0);
    // 0x22dbd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22dbd8: 0x90424130  lbu         $v0, 0x4130($v0)
    ctx->pc = 0x22dbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B4130u));
label_22dbdc:
    // 0x22dbdc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22DBDCu;
    {
        const bool branch_taken_0x22dbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBDCu;
        // 0x22dbe0: 0x3a230002  xori        $v1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbdc) {
            ctx->pc = 0x22DC14u;
            goto label_22dc14;
        }
    }
    ctx->pc = 0x22DBE4u;
    // 0x22dbe4: 0x8e0501f4  lw          $a1, 0x1F4($s0)
    ctx->pc = 0x22dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x22dbe8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22dbec: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x22dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x22dbf0: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x22dbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x22dbf4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x22dbf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x22dbf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22dbfc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x22dbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22dc00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22dc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22dc04: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x22dc04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x22dc08: 0xae0501f4  sw          $a1, 0x1F4($s0)
    ctx->pc = 0x22dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 5));
    // 0x22dc0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22DC0Cu;
    {
        const bool branch_taken_0x22dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC0Cu;
        // 0x22dc10: 0xae040274  sw          $a0, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc0c) {
            ctx->pc = 0x22DC40u;
            goto label_22dc40;
        }
    }
    ctx->pc = 0x22DC14u;
label_22dc14:
    // 0x22dc14: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x22dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x22dc18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22dc1c: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x22dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x22dc20: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x22dc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x22dc24: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x22dc24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x22dc28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22dc2c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x22dc2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22dc30: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22dc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22dc34: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x22dc34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x22dc38: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x22dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x22dc3c: 0xae040104  sw          $a0, 0x104($s0)
    ctx->pc = 0x22dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 4));
label_22dc40:
    // 0x22dc40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22dc44: 0x90424130  lbu         $v0, 0x4130($v0)
    ctx->pc = 0x22dc44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B4130u));
label_22dc48:
    // 0x22dc48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22dc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22dc4c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x22dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x22dc50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22dc54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22dc58: 0x8c4303c0  lw          $v1, 0x3C0($v0)
    ctx->pc = 0x22dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
    // 0x22dc5c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x22DC5Cu;
    {
        const bool branch_taken_0x22dc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC5Cu;
        // 0x22dc60: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc5c) {
            ctx->pc = 0x22DCA8u;
            goto label_22dca8;
        }
    }
    ctx->pc = 0x22DC64u;
    // 0x22dc64: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x22dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x22dc68: 0x3442a030  ori         $v0, $v0, 0xA030
    ctx->pc = 0x22dc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41008);
    // 0x22dc6c: 0x3484a020  ori         $a0, $a0, 0xA020
    ctx->pc = 0x22dc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40992);
    // 0x22dc70: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22dc70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000a030
    // 0x22dc74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x22dc78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x22dc78u;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 0)); // MMIO: 0x1000a020
    // 0x22dc7c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x22dc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x22dc80: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x22dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x22dc84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22dc84u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 2)); // MMIO: 0x1000a000
    // 0x22dc88: 0xf  sync
    ctx->pc = 0x22dc88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22dc8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22dc90: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22dc90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3EF8u));
    // 0x22dc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22dc98: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22dc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dc9c: 0xa0223ef8  sb          $v0, 0x3EF8($at)
    ctx->pc = 0x22dc9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B3EF8u, _value); } while (0);
    // 0x22dca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22DCA0u;
    {
        const bool branch_taken_0x22dca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dca0) {
            ctx->pc = 0x22DCB0u;
            goto label_22dcb0;
        }
    }
    ctx->pc = 0x22DCA8u;
label_22dca8:
    // 0x22dca8: 0xc08b518  jal         func_22D460
    ctx->pc = 0x22DCA8u;
    SET_GPR_U32(ctx, 31, 0x22DCB0u);
    ctx->pc = 0x22DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCA8u;
    // 0x22dcac: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D460u, 0x22DCA8u, 0x22DCB0u)) {
        return;
    }
    ctx->pc = 0x22DCB0u;
label_22dcb0:
    // 0x22dcb0: 0x252e024  and         $gp, $s2, $s2
    ctx->pc = 0x22dcb0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) & GPR_U64(ctx, 18));
    // 0x22dcb4: 0xf  sync
    ctx->pc = 0x22dcb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22dcb8: 0x42000038  ei
    ctx->pc = 0x22dcb8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x22dcbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22dcbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dcc0:
    // 0x22dcc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22dcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22dcc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22dcc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dcc8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22dcc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22dcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x22DCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCD0u;
        // 0x22dcd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DCD8u;
}
