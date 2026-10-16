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

// Function: sub_002E5A18
// Address: 0x2e5a18 - 0x2e6068
void sub_002E5A18_0x2e5a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5A18_0x2e5a18");
#endif

    switch (ctx->pc) {
        case 0x2e5a60u: goto label_2e5a60;
        case 0x2e5ad8u: goto label_2e5ad8;
        case 0x2e5b38u: goto label_2e5b38;
        case 0x2e5ba8u: goto label_2e5ba8;
        case 0x2e5c08u: goto label_2e5c08;
        case 0x2e5cb0u: goto label_2e5cb0;
        case 0x2e5d10u: goto label_2e5d10;
        case 0x2e5d80u: goto label_2e5d80;
        case 0x2e5de0u: goto label_2e5de0;
        case 0x2e5e70u: goto label_2e5e70;
        case 0x2e5ee8u: goto label_2e5ee8;
        case 0x2e5f70u: goto label_2e5f70;
        case 0x2e5fe8u: goto label_2e5fe8;
        case 0x2e6040u: goto label_2e6040;
        default: break;
    }

    ctx->pc = 0x2e5a18u;

    // 0x2e5a18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e5a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e5a1c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e5a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e5a20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e5a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e5a24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e5a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e5a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e5a2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e5a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a30: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2e5a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2e5a34: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e5a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a38: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2e5a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2e5a3c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e5a3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a40: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e5a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e5a44: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x2e5a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a48: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2e5a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a4c: 0x129a80b  movn        $s5, $t1, $t1
    ctx->pc = 0x2e5a4cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 9));
    // 0x2e5a50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e5a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e5a58: 0xc0b93b2  jal         func_2E4EC8
    ctx->pc = 0x2E5A58u;
    SET_GPR_U32(ctx, 31, 0x2E5A60u);
    ctx->pc = 0x2E5A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A58u;
    // 0x2e5a5c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4EC8u, 0x2E5A58u, 0x2E5A60u)) {
        return;
    }
    ctx->pc = 0x2E5A60u;
label_2e5a60:
    // 0x2e5a60: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x2e5a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2e5a64: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2e5a64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2e5a68: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2e5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e5a6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e5a70: 0x50800b  movn        $s0, $v0, $s0
    ctx->pc = 0x2e5a70u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    // 0x2e5a74: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2e5a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e5a78: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x2e5a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e5a7c: 0x14430071  bne         $v0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2E5A7Cu;
    {
        const bool branch_taken_0x2e5a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A7Cu;
        // 0x2e5a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a7c) {
            ctx->pc = 0x2E5C44u;
            goto label_2e5c44;
        }
    }
    ctx->pc = 0x2E5A84u;
    // 0x2e5a84: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x2e5a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2e5a88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e5a8c: 0x5462006f  bnel        $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2E5A8Cu;
    {
        const bool branch_taken_0x2e5a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5a8c) {
            ctx->pc = 0x2E5A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5A8Cu;
            // 0x2e5a90: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5C4Cu;
            goto label_2e5c4c;
        }
    }
    ctx->pc = 0x2E5A94u;
    // 0x2e5a94: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2e5a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2e5a98: 0xb43023  subu        $a2, $a1, $s4
    ctx->pc = 0x2e5a98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2e5a9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5aa0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E5AA0u;
    {
        const bool branch_taken_0x2e5aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AA0u;
        // 0x2e5aa4: 0x54840  sll         $t1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5aa0) {
            ctx->pc = 0x2E5B74u;
            goto label_2e5b74;
        }
    }
    ctx->pc = 0x2E5AA8u;
    // 0x2e5aa8: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x2e5aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2e5aac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5ab0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E5AB0u;
    {
        const bool branch_taken_0x2e5ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ab0) {
            ctx->pc = 0x2E5B14u;
            goto label_2e5b14;
        }
    }
    ctx->pc = 0x2E5AB8u;
    // 0x2e5ab8: 0x12000162  beqz        $s0, . + 4 + (0x162 << 2)
    ctx->pc = 0x2E5AB8u;
    {
        const bool branch_taken_0x2e5ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AB8u;
        // 0x2e5abc: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ab8) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5AC0u;
    // 0x2e5ac0: 0x10c00160  beqz        $a2, . + 4 + (0x160 << 2)
    ctx->pc = 0x2E5AC0u;
    {
        const bool branch_taken_0x2e5ac0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AC0u;
        // 0x2e5ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ac0) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5AC8u;
    // 0x2e5ac8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e5ac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5acc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2e5accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ad0: 0xc78182ac  lwc1        $f1, -0x7D54($gp)
    ctx->pc = 0x2e5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5ad4: 0x0  nop
    ctx->pc = 0x2e5ad4u;
    // NOP
label_2e5ad8:
    // 0x2e5ad8: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x2e5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2e5adc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e5adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5ae0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5ae4: 0xe6202b  sltu        $a0, $a3, $a2
    ctx->pc = 0x2e5ae4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5ae8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5aec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5af0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e5af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e5af4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5af8: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2e5afc: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2e5afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5b00: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2e5b00u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e5b04: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E5B04u;
    {
        const bool branch_taken_0x2e5b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B04u;
        // 0x2e5b08: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b04) {
            ctx->pc = 0x2E5AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5ad8;
        }
    }
    ctx->pc = 0x2E5B0Cu;
    // 0x2e5b0c: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x2E5B0Cu;
    {
        const bool branch_taken_0x2e5b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B0Cu;
        // 0x2e5b10: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b0c) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5B14u;
label_2e5b14:
    // 0x2e5b14: 0x1200014b  beqz        $s0, . + 4 + (0x14B << 2)
    ctx->pc = 0x2E5B14u;
    {
        const bool branch_taken_0x2e5b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B14u;
        // 0x2e5b18: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b14) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5B1Cu;
    // 0x2e5b1c: 0x10c00149  beqz        $a2, . + 4 + (0x149 << 2)
    ctx->pc = 0x2E5B1Cu;
    {
        const bool branch_taken_0x2e5b1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B1Cu;
        // 0x2e5b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b1c) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5B24u;
    // 0x2e5b24: 0x3c01c300  lui         $at, 0xC300
    ctx->pc = 0x2e5b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49920 << 16));
    // 0x2e5b28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e5b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5b2c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2e5b2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b30: 0xc78182b0  lwc1        $f1, -0x7D50($gp)
    ctx->pc = 0x2e5b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5b34: 0x0  nop
    ctx->pc = 0x2e5b34u;
    // NOP
label_2e5b38:
    // 0x2e5b38: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x2e5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2e5b3c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e5b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5b40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5b44: 0xe6202b  sltu        $a0, $a3, $a2
    ctx->pc = 0x2e5b44u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5b4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5b50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e5b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e5b54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5b58: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5b58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2e5b5c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2e5b5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5b60: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2e5b60u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e5b64: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E5B64u;
    {
        const bool branch_taken_0x2e5b64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B64u;
        // 0x2e5b68: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b64) {
            ctx->pc = 0x2E5B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5b38;
        }
    }
    ctx->pc = 0x2E5B6Cu;
    // 0x2e5b6c: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x2E5B6Cu;
    {
        const bool branch_taken_0x2e5b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B6Cu;
        // 0x2e5b70: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b6c) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5B74u;
label_2e5b74:
    // 0x2e5b74: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x2e5b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2e5b78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5b7c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E5B7Cu;
    {
        const bool branch_taken_0x2e5b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5b7c) {
            ctx->pc = 0x2E5BE4u;
            goto label_2e5be4;
        }
    }
    ctx->pc = 0x2E5B84u;
    // 0x2e5b84: 0x1200012f  beqz        $s0, . + 4 + (0x12F << 2)
    ctx->pc = 0x2E5B84u;
    {
        const bool branch_taken_0x2e5b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B84u;
        // 0x2e5b88: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b84) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5B8Cu;
    // 0x2e5b8c: 0x10c0012d  beqz        $a2, . + 4 + (0x12D << 2)
    ctx->pc = 0x2E5B8Cu;
    {
        const bool branch_taken_0x2e5b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B8Cu;
        // 0x2e5b90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b8c) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5B94u;
    // 0x2e5b94: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2e5b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2e5b98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e5b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ba0: 0xc78182b4  lwc1        $f1, -0x7D4C($gp)
    ctx->pc = 0x2e5ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5ba4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ba8:
    // 0x2e5ba8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2e5ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5bac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5bb0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5bb4: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x2e5bb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5bbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5bc0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e5bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e5bc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5bc8: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5bc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2e5bcc: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2e5bccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5bd0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2e5bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e5bd4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E5BD4u;
    {
        const bool branch_taken_0x2e5bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BD4u;
        // 0x2e5bd8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bd4) {
            ctx->pc = 0x2E5BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5ba8;
        }
    }
    ctx->pc = 0x2E5BDCu;
    // 0x2e5bdc: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x2E5BDCu;
    {
        const bool branch_taken_0x2e5bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BDCu;
        // 0x2e5be0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bdc) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5BE4u;
label_2e5be4:
    // 0x2e5be4: 0x12000117  beqz        $s0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2E5BE4u;
    {
        const bool branch_taken_0x2e5be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BE4u;
        // 0x2e5be8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5be4) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5BECu;
    // 0x2e5bec: 0x10c00115  beqz        $a2, . + 4 + (0x115 << 2)
    ctx->pc = 0x2E5BECu;
    {
        const bool branch_taken_0x2e5bec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BECu;
        // 0x2e5bf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bec) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5BF4u;
    // 0x2e5bf4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e5bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5bfc: 0xc78182b8  lwc1        $f1, -0x7D48($gp)
    ctx->pc = 0x2e5bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5c00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c04: 0x0  nop
    ctx->pc = 0x2e5c04u;
    // NOP
label_2e5c08:
    // 0x2e5c08: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2e5c08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5c0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5c10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5c14: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x2e5c14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5c1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5c20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e5c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e5c24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5c28: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2e5c2c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2e5c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5c30: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2e5c30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e5c34: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E5C34u;
    {
        const bool branch_taken_0x2e5c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C34u;
        // 0x2e5c38: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c34) {
            ctx->pc = 0x2E5C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5c08;
        }
    }
    ctx->pc = 0x2E5C3Cu;
    // 0x2e5c3c: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x2E5C3Cu;
    {
        const bool branch_taken_0x2e5c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C3Cu;
        // 0x2e5c40: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c3c) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5C44u;
label_2e5c44:
    // 0x2e5c44: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2e5c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e5c48: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e5c4c:
    // 0x2e5c4c: 0x54620073  bnel        $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2E5C4Cu;
    {
        const bool branch_taken_0x2e5c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5c4c) {
            ctx->pc = 0x2E5C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5C4Cu;
            // 0x2e5c50: 0x92220018  lbu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5E1Cu;
            goto label_2e5e1c;
        }
    }
    ctx->pc = 0x2E5C54u;
    // 0x2e5c54: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x2e5c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2e5c58: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e5c5c: 0x5462006f  bnel        $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2E5C5Cu;
    {
        const bool branch_taken_0x2e5c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5c5c) {
            ctx->pc = 0x2E5C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5C5Cu;
            // 0x2e5c60: 0x92220018  lbu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5E1Cu;
            goto label_2e5e1c;
        }
    }
    ctx->pc = 0x2E5C64u;
    // 0x2e5c64: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e5c68: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e5c6c: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x2e5c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2e5c70: 0x24842  srl         $t1, $v0, 1
    ctx->pc = 0x2e5c70u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e5c74: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e5c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e5c78: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E5C78u;
    {
        const bool branch_taken_0x2e5c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C78u;
        // 0x2e5c7c: 0x1243023  subu        $a2, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c78) {
            ctx->pc = 0x2E5D4Cu;
            goto label_2e5d4c;
        }
    }
    ctx->pc = 0x2E5C80u;
    // 0x2e5c80: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x2e5c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2e5c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5c88: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E5C88u;
    {
        const bool branch_taken_0x2e5c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5c88) {
            ctx->pc = 0x2E5CECu;
            goto label_2e5cec;
        }
    }
    ctx->pc = 0x2E5C90u;
    // 0x2e5c90: 0x120000ec  beqz        $s0, . + 4 + (0xEC << 2)
    ctx->pc = 0x2E5C90u;
    {
        const bool branch_taken_0x2e5c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C90u;
        // 0x2e5c94: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c90) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5C98u;
    // 0x2e5c98: 0x10c000ea  beqz        $a2, . + 4 + (0xEA << 2)
    ctx->pc = 0x2E5C98u;
    {
        const bool branch_taken_0x2e5c98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C98u;
        // 0x2e5c9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c98) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5CA0u;
    // 0x2e5ca0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e5ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5ca4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ca8: 0x3c013b7f  lui         $at, 0x3B7F
    ctx->pc = 0x2e5ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15231 << 16));
    // 0x2e5cac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e5cb0:
    // 0x2e5cb0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2e5cb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5cb4: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x2e5cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2e5cb8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5cbc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e5cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2e5cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5cc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5cc8: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x2e5cc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5ccc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e5cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e5cd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5cd4: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5cd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2e5cd8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2e5cd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5cdc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E5CDCu;
    {
        const bool branch_taken_0x2e5cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CDCu;
        // 0x2e5ce0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cdc) {
            ctx->pc = 0x2E5CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5cb0;
        }
    }
    ctx->pc = 0x2E5CE4u;
    // 0x2e5ce4: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x2E5CE4u;
    {
        const bool branch_taken_0x2e5ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CE4u;
        // 0x2e5ce8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ce4) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5CECu;
label_2e5cec:
    // 0x2e5cec: 0x120000d5  beqz        $s0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x2E5CECu;
    {
        const bool branch_taken_0x2e5cec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CECu;
        // 0x2e5cf0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cec) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5CF4u;
    // 0x2e5cf4: 0x10c000d3  beqz        $a2, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2E5CF4u;
    {
        const bool branch_taken_0x2e5cf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CF4u;
        // 0x2e5cf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cf4) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5CFCu;
    // 0x2e5cfc: 0x3c01c700  lui         $at, 0xC700
    ctx->pc = 0x2e5cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50944 << 16));
    // 0x2e5d00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e5d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5d04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d08: 0x3c013b7e  lui         $at, 0x3B7E
    ctx->pc = 0x2e5d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15230 << 16));
    // 0x2e5d0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e5d10:
    // 0x2e5d10: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2e5d10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5d14: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x2e5d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2e5d18: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5d1c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2e5d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5d28: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x2e5d28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5d2c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e5d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e5d30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5d34: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5d34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2e5d38: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2e5d38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5d3c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E5D3Cu;
    {
        const bool branch_taken_0x2e5d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D3Cu;
        // 0x2e5d40: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d3c) {
            ctx->pc = 0x2E5D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5d10;
        }
    }
    ctx->pc = 0x2E5D44u;
    // 0x2e5d44: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2E5D44u;
    {
        const bool branch_taken_0x2e5d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D44u;
        // 0x2e5d48: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d44) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5D4Cu;
label_2e5d4c:
    // 0x2e5d4c: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x2e5d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2e5d50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5d54: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E5D54u;
    {
        const bool branch_taken_0x2e5d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5d54) {
            ctx->pc = 0x2E5DBCu;
            goto label_2e5dbc;
        }
    }
    ctx->pc = 0x2E5D5Cu;
    // 0x2e5d5c: 0x120000b9  beqz        $s0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2E5D5Cu;
    {
        const bool branch_taken_0x2e5d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D5Cu;
        // 0x2e5d60: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d5c) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5D64u;
    // 0x2e5d64: 0x10c000b7  beqz        $a2, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2E5D64u;
    {
        const bool branch_taken_0x2e5d64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D64u;
        // 0x2e5d68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d64) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5D6Cu;
    // 0x2e5d6c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x2e5d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x2e5d70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e5d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5d74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d78: 0x3c013b7e  lui         $at, 0x3B7E
    ctx->pc = 0x2e5d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15230 << 16));
    // 0x2e5d7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e5d80:
    // 0x2e5d80: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2e5d80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5d84: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x2e5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2e5d88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5d8c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2e5d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5d94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5d98: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x2e5d98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5d9c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e5d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e5da0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5da4: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5da4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2e5da8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2e5da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5dac: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E5DACu;
    {
        const bool branch_taken_0x2e5dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DACu;
        // 0x2e5db0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5dac) {
            ctx->pc = 0x2E5D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5d80;
        }
    }
    ctx->pc = 0x2E5DB4u;
    // 0x2e5db4: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2E5DB4u;
    {
        const bool branch_taken_0x2e5db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DB4u;
        // 0x2e5db8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5db4) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5DBCu;
label_2e5dbc:
    // 0x2e5dbc: 0x120000a1  beqz        $s0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2E5DBCu;
    {
        const bool branch_taken_0x2e5dbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DBCu;
        // 0x2e5dc0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5dbc) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5DC4u;
    // 0x2e5dc4: 0x10c0009f  beqz        $a2, . + 4 + (0x9F << 2)
    ctx->pc = 0x2E5DC4u;
    {
        const bool branch_taken_0x2e5dc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DC4u;
        // 0x2e5dc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5dc4) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5DCCu;
    // 0x2e5dcc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e5dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5dd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5dd4: 0x3c013b7e  lui         $at, 0x3B7E
    ctx->pc = 0x2e5dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15230 << 16));
    // 0x2e5dd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5ddc: 0x0  nop
    ctx->pc = 0x2e5ddcu;
    // NOP
label_2e5de0:
    // 0x2e5de0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2e5de0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5de4: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x2e5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2e5de8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5dec: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e5decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2e5df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5df8: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x2e5df8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5dfc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e5dfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e5e00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5e04: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5e04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2e5e08: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2e5e08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5e0c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E5E0Cu;
    {
        const bool branch_taken_0x2e5e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E0Cu;
        // 0x2e5e10: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e0c) {
            ctx->pc = 0x2E5DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5de0;
        }
    }
    ctx->pc = 0x2E5E14u;
    // 0x2e5e14: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2E5E14u;
    {
        const bool branch_taken_0x2e5e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E14u;
        // 0x2e5e18: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e14) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5E1Cu;
label_2e5e1c:
    // 0x2e5e1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e5e1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5e20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5e24: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E5E24u;
    {
        const bool branch_taken_0x2e5e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E24u;
        // 0x2e5e28: 0x92650018  lbu         $a1, 0x18($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e24) {
            ctx->pc = 0x2E5F2Cu;
            goto label_2e5f2c;
        }
    }
    ctx->pc = 0x2E5E2Cu;
    // 0x2e5e2c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2e5e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2e5e30: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2E5E30u;
    {
        const bool branch_taken_0x2e5e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E30u;
        // 0x2e5e34: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e30) {
            ctx->pc = 0x2E5F20u;
            goto label_2e5f20;
        }
    }
    ctx->pc = 0x2E5E38u;
    // 0x2e5e38: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2e5e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e5e3c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E5E3Cu;
    {
        const bool branch_taken_0x2e5e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E3Cu;
        // 0x2e5e40: 0x8e290008  lw          $t1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e3c) {
            ctx->pc = 0x2E5EA8u;
            goto label_2e5ea8;
        }
    }
    ctx->pc = 0x2E5E44u;
    // 0x2e5e44: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x2e5e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2e5e48: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E5E48u;
    {
        const bool branch_taken_0x2e5e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E48u;
        // 0x2e5e4c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e48) {
            ctx->pc = 0x2E5EACu;
            goto label_2e5eac;
        }
    }
    ctx->pc = 0x2E5E50u;
    // 0x2e5e50: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e5e54: 0x12000070  beqz        $s0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2E5E54u;
    {
        const bool branch_taken_0x2e5e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E54u;
        // 0x2e5e58: 0x1223023  subu        $a2, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e54) {
            ctx->pc = 0x2E6018u;
            goto label_2e6018;
        }
    }
    ctx->pc = 0x2E5E5Cu;
    // 0x2e5e5c: 0x10c0006e  beqz        $a2, . + 4 + (0x6E << 2)
    ctx->pc = 0x2E5E5Cu;
    {
        const bool branch_taken_0x2e5e5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E5Cu;
        // 0x2e5e60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e5c) {
            ctx->pc = 0x2E6018u;
            goto label_2e6018;
        }
    }
    ctx->pc = 0x2E5E64u;
    // 0x2e5e64: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2e5e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2e5e68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5e6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e70:
    // 0x2e5e70: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2e5e70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5e74: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x2e5e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2e5e78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5e7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5e84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5e88: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x2e5e88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5e8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5e90: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5e90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e5e94: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e5e94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5e98: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E5E98u;
    {
        const bool branch_taken_0x2e5e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E98u;
        // 0x2e5e9c: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e98) {
            ctx->pc = 0x2E5E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5e70;
        }
    }
    ctx->pc = 0x2E5EA0u;
    // 0x2e5ea0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2E5EA0u;
    {
        const bool branch_taken_0x2e5ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EA0u;
        // 0x2e5ea4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ea0) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5EA8u;
label_2e5ea8:
    // 0x2e5ea8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e5eac:
    // 0x2e5eac: 0x14620065  bne         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2E5EACu;
    {
        const bool branch_taken_0x2e5eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EACu;
        // 0x2e5eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5eac) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5EB4u;
    // 0x2e5eb4: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x2e5eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2e5eb8: 0x14430062  bne         $v0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x2E5EB8u;
    {
        const bool branch_taken_0x2e5eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EB8u;
        // 0x2e5ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5eb8) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5EC0u;
    // 0x2e5ec0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e5ec4: 0x93042  srl         $a2, $t1, 1
    ctx->pc = 0x2e5ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x2e5ec8: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2E5EC8u;
    {
        const bool branch_taken_0x2e5ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EC8u;
        // 0x2e5ecc: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ec8) {
            ctx->pc = 0x2E6018u;
            goto label_2e6018;
        }
    }
    ctx->pc = 0x2E5ED0u;
    // 0x2e5ed0: 0x10c00051  beqz        $a2, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E5ED0u;
    {
        const bool branch_taken_0x2e5ed0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5ED0u;
        // 0x2e5ed4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ed0) {
            ctx->pc = 0x2E6018u;
            goto label_2e6018;
        }
    }
    ctx->pc = 0x2E5ED8u;
    // 0x2e5ed8: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x2e5ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x2e5edc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ee4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ee8:
    // 0x2e5ee8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2e5ee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5eec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5ef0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e5ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2e5ef4: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x2e5ef4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5efc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5f00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5f04: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e5f08: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e5f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5f0c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2e5f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e5f10: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E5F10u;
    {
        const bool branch_taken_0x2e5f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F10u;
        // 0x2e5f14: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f10) {
            ctx->pc = 0x2E5EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5ee8;
        }
    }
    ctx->pc = 0x2E5F18u;
    // 0x2e5f18: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2E5F18u;
    {
        const bool branch_taken_0x2e5f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F18u;
        // 0x2e5f1c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f18) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5F20u;
label_2e5f20:
    // 0x2e5f20: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2e5f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e5f24: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E5F24u;
    {
        const bool branch_taken_0x2e5f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f24) {
            ctx->pc = 0x2E5F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5F24u;
            // 0x2e5f28: 0x9263000c  lbu         $v1, 0xC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6020u;
            goto label_2e6020;
        }
    }
    ctx->pc = 0x2E5F2Cu;
label_2e5f2c:
    // 0x2e5f2c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2e5f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2e5f30: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2E5F30u;
    {
        const bool branch_taken_0x2e5f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f30) {
            ctx->pc = 0x2E5F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5F30u;
            // 0x2e5f34: 0x9263000c  lbu         $v1, 0xC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6020u;
            goto label_2e6020;
        }
    }
    ctx->pc = 0x2E5F38u;
    // 0x2e5f38: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2e5f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e5f3c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e5f40: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E5F40u;
    {
        const bool branch_taken_0x2e5f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F40u;
        // 0x2e5f44: 0x8e290008  lw          $t1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f40) {
            ctx->pc = 0x2E5FA8u;
            goto label_2e5fa8;
        }
    }
    ctx->pc = 0x2E5F48u;
    // 0x2e5f48: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x2e5f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2e5f4c: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E5F4Cu;
    {
        const bool branch_taken_0x2e5f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F4Cu;
        // 0x2e5f50: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f4c) {
            ctx->pc = 0x2E5FACu;
            goto label_2e5fac;
        }
    }
    ctx->pc = 0x2E5F54u;
    // 0x2e5f54: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e5f58: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E5F58u;
    {
        const bool branch_taken_0x2e5f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F58u;
        // 0x2e5f5c: 0x1223023  subu        $a2, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f58) {
            ctx->pc = 0x2E6018u;
            goto label_2e6018;
        }
    }
    ctx->pc = 0x2E5F60u;
    // 0x2e5f60: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E5F60u;
    {
        const bool branch_taken_0x2e5f60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F60u;
        // 0x2e5f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f60) {
            ctx->pc = 0x2E6018u;
            goto label_2e6018;
        }
    }
    ctx->pc = 0x2E5F68u;
    // 0x2e5f68: 0x3c01c300  lui         $at, 0xC300
    ctx->pc = 0x2e5f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49920 << 16));
    // 0x2e5f6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e5f70:
    // 0x2e5f70: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x2e5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2e5f74: 0x2072821  addu        $a1, $s0, $a3
    ctx->pc = 0x2e5f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2e5f78: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e5f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5f7c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5f80: 0xe6202b  sltu        $a0, $a3, $a2
    ctx->pc = 0x2e5f80u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5f84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5f88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5f8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5f90: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5f90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e5f94: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e5f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5f98: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E5F98u;
    {
        const bool branch_taken_0x2e5f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F98u;
        // 0x2e5f9c: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f98) {
            ctx->pc = 0x2E5F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5f70;
        }
    }
    ctx->pc = 0x2E5FA0u;
    // 0x2e5fa0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2E5FA0u;
    {
        const bool branch_taken_0x2e5fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FA0u;
        // 0x2e5fa4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fa0) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5FA8u;
label_2e5fa8:
    // 0x2e5fa8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e5fac:
    // 0x2e5fac: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E5FACu;
    {
        const bool branch_taken_0x2e5fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FACu;
        // 0x2e5fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fac) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5FB4u;
    // 0x2e5fb4: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x2e5fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2e5fb8: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E5FB8u;
    {
        const bool branch_taken_0x2e5fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FB8u;
        // 0x2e5fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fb8) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E5FC0u;
    // 0x2e5fc0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e5fc4: 0x93042  srl         $a2, $t1, 1
    ctx->pc = 0x2e5fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x2e5fc8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E5FC8u;
    {
        const bool branch_taken_0x2e5fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FC8u;
        // 0x2e5fcc: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fc8) {
            ctx->pc = 0x2E6018u;
            goto label_2e6018;
        }
    }
    ctx->pc = 0x2E5FD0u;
    // 0x2e5fd0: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E5FD0u;
    {
        const bool branch_taken_0x2e5fd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FD0u;
        // 0x2e5fd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fd0) {
            ctx->pc = 0x2E6018u;
            goto label_2e6018;
        }
    }
    ctx->pc = 0x2E5FD8u;
    // 0x2e5fd8: 0x3c01c700  lui         $at, 0xC700
    ctx->pc = 0x2e5fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50944 << 16));
    // 0x2e5fdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5fe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e5fe8:
    // 0x2e5fe8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2e5fe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5fec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e5fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e5ff0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e5ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2e5ff4: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x2e5ff4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e5ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e6000: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e6000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e6004: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e6004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e6008: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e6008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e600c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2e600cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e6010: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E6010u;
    {
        const bool branch_taken_0x2e6010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6010u;
        // 0x2e6014: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6010) {
            ctx->pc = 0x2E5FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5fe8;
        }
    }
    ctx->pc = 0x2E6018u;
label_2e6018:
    // 0x2e6018: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6018u;
    {
        const bool branch_taken_0x2e6018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6018u;
        // 0x2e601c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6018) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E6020u;
label_2e6020:
    // 0x2e6020: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2e6020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e6024: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6024u;
    {
        const bool branch_taken_0x2e6024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6024u;
        // 0x2e6028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6024) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E602Cu;
    // 0x2e602c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E602Cu;
    {
        const bool branch_taken_0x2e602c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E602Cu;
        // 0x2e6030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e602c) {
            ctx->pc = 0x2E6040u;
            goto label_2e6040;
        }
    }
    ctx->pc = 0x2E6034u;
    // 0x2e6034: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2e6034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e6038: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E6038u;
    SET_GPR_U32(ctx, 31, 0x2E6040u);
    ctx->pc = 0x2E603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6038u;
    // 0x2e603c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E6038u, 0x2E6040u)) {
        return;
    }
    ctx->pc = 0x2E6040u;
label_2e6040:
    // 0x2e6040: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e6040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2e6044:
    // 0x2e6044: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e6044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e6048: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e6048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e604c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e604cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6050: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6054: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2e6054u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6058: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2e6058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e605c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e605cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6060: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6060u;
        // 0x2e6064: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6068u;
}
