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

// Function: sub_002D7918
// Address: 0x2d7918 - 0x2d7ab8
void sub_002D7918_0x2d7918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7918_0x2d7918");
#endif

    switch (ctx->pc) {
        case 0x2d7958u: goto label_2d7958;
        case 0x2d79d0u: goto label_2d79d0;
        case 0x2d79e0u: goto label_2d79e0;
        case 0x2d7a20u: goto label_2d7a20;
        case 0x2d7a78u: goto label_2d7a78;
        default: break;
    }

    ctx->pc = 0x2d7918u;

    // 0x2d7918: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d7918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d791c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2d7920: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d7920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2d7924: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d7924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7928: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d7928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2d792c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d792cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7930: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d7930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d7934: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d7934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2d7938: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d7938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2d793c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d7940: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x2d7940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d7944: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D7944u;
    {
        const bool branch_taken_0x2d7944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7944u;
        // 0x2d7948: 0x8e550004  lw          $s5, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7944) {
            ctx->pc = 0x2D79F0u;
            goto label_2d79f0;
        }
    }
    ctx->pc = 0x2D794Cu;
    // 0x2d794c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d794cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7950: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2d7950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2d7954: 0x0  nop
    ctx->pc = 0x2d7954u;
    // NOP
label_2d7958:
    // 0x2d7958: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2d7958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d795c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d795cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d7960: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2d7960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d7964: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d7964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d7968: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2d7968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d796c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d7970: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2d7970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d7974: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d7974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7978: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d7978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d797c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2d797cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7980: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2d7980u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2d7984: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x2d7984u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d7988: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2d7988u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2d798c: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2d798cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d7990: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2d7990u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x2d7994: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x2d7994u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d7998: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x2d7998u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x2d799c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d79a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d79a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d79a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d79a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d79a8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2d79a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d79ac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d79acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d79b0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d79b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d79b4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2d79b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d79b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d79b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d79bc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2d79bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d79c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d79c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d79c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79c8: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x2D79C8u;
    SET_GPR_U32(ctx, 31, 0x2D79D0u);
    ctx->pc = 0x2D79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79C8u;
    // 0x2d79cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2D79C8u, 0x2D79D0u)) {
        return;
    }
    ctx->pc = 0x2D79D0u;
label_2d79d0:
    // 0x2d79d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d79d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d79d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d79d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79d8: 0xc092d94  jal         func_24B650
    ctx->pc = 0x2D79D8u;
    SET_GPR_U32(ctx, 31, 0x2D79E0u);
    ctx->pc = 0x2D79DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79D8u;
    // 0x2d79dc: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x2D79D8u, 0x2D79E0u)) {
        return;
    }
    ctx->pc = 0x2D79E0u;
label_2d79e0:
    // 0x2d79e0: 0x9643000c  lhu         $v1, 0xC($s2)
    ctx->pc = 0x2d79e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d79e4: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2d79e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d79e8: 0x5460ffdb  bnel        $v1, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2D79E8u;
    {
        const bool branch_taken_0x2d79e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d79e8) {
            ctx->pc = 0x2D79ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D79E8u;
            // 0x2d79ec: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7958;
        }
    }
    ctx->pc = 0x2D79F0u;
label_2d79f0:
    // 0x2d79f0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d79f4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d79f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d79f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d79f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d79fc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D79FCu;
    {
        const bool branch_taken_0x2d79fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79FCu;
        // 0x2d7a00: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79fc) {
            ctx->pc = 0x2D7A94u;
            goto label_2d7a94;
        }
    }
    ctx->pc = 0x2D7A04u;
    // 0x2d7a04: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2d7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2d7a08: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D7A08u;
    {
        const bool branch_taken_0x2d7a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A08u;
        // 0x2d7a0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a08) {
            ctx->pc = 0x2D7A90u;
            goto label_2d7a90;
        }
    }
    ctx->pc = 0x2D7A10u;
    // 0x2d7a10: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2d7a10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x2d7a14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d7a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a18: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2d7a18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x2d7a1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d7a1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a20:
    // 0x2d7a20: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x2d7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x2d7a24: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2d7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2d7a28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7a2c: 0x10530012  beq         $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D7A2Cu;
    {
        const bool branch_taken_0x2d7a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2D7A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A2Cu;
        // 0x2d7a30: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a2c) {
            ctx->pc = 0x2D7A78u;
            goto label_2d7a78;
        }
    }
    ctx->pc = 0x2D7A34u;
    // 0x2d7a34: 0x8e470038  lw          $a3, 0x38($s2)
    ctx->pc = 0x2d7a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2d7a38: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2d7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2d7a3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2d7a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7a40: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2d7a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2d7a44: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2d7a44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d7a48: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2d7a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d7a4c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d7a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d7a50: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x2d7a50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2d7a54: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2d7a54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2d7a58: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x2d7a58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2d7a5c: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2d7a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2d7a60: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x2d7a60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2d7a64: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2d7a64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2d7a68: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2d7a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2d7a6c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2d7a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d7a70: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x2D7A70u;
    SET_GPR_U32(ctx, 31, 0x2D7A78u);
    ctx->pc = 0x2D7A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A70u;
    // 0x2d7a74: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x2D7A70u, 0x2D7A78u)) {
        return;
    }
    ctx->pc = 0x2D7A78u;
label_2d7a78:
    // 0x2d7a78: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2d7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2d7a7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d7a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d7a80: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2d7a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2d7a84: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d7a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d7a88: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2D7A88u;
    {
        const bool branch_taken_0x2d7a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A88u;
        // 0x2d7a8c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a88) {
            ctx->pc = 0x2D7A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7a20;
        }
    }
    ctx->pc = 0x2D7A90u;
label_2d7a90:
    // 0x2d7a90: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d7a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a94:
    // 0x2d7a94: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d7a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7a98: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d7a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7a9c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d7a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7aa0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d7aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7aa4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d7aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7aa8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d7aa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AB0u;
        // 0x2d7ab4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7AB8u;
}
