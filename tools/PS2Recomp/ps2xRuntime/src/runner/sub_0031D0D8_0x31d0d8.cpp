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

// Function: sub_0031D0D8
// Address: 0x31d0d8 - 0x31d808
void sub_0031D0D8_0x31d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D0D8_0x31d0d8");
#endif

    switch (ctx->pc) {
        case 0x31d120u: goto label_31d120;
        case 0x31d210u: goto label_31d210;
        case 0x31d468u: goto label_31d468;
        case 0x31d4f0u: goto label_31d4f0;
        case 0x31d518u: goto label_31d518;
        case 0x31d528u: goto label_31d528;
        case 0x31d540u: goto label_31d540;
        case 0x31d5b0u: goto label_31d5b0;
        case 0x31d5c8u: goto label_31d5c8;
        case 0x31d5f0u: goto label_31d5f0;
        case 0x31d6a4u: goto label_31d6a4;
        case 0x31d70cu: goto label_31d70c;
        case 0x31d7e4u: goto label_31d7e4;
        default: break;
    }

    ctx->pc = 0x31d0d8u;

    // 0x31d0d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31d0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31d0dc: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x31d0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x31d0e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31d0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31d0e4: 0x2ca2001f  sltiu       $v0, $a1, 0x1F
    ctx->pc = 0x31d0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x31d0e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31d0ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31d0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d0f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31d0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31d0f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31d0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31d0f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31d0fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D0FCu;
    {
        const bool branch_taken_0x31d0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0FCu;
        // 0x31d100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0fc) {
            ctx->pc = 0x31D114u;
            goto label_31d114;
        }
    }
    ctx->pc = 0x31D104u;
    // 0x31d104: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31d104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31d108: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x31d108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x31d10c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31D10Cu;
    {
        const bool branch_taken_0x31d10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D10Cu;
        // 0x31d110: 0xa28824  and         $s1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d10c) {
            ctx->pc = 0x31D118u;
            goto label_31d118;
        }
    }
    ctx->pc = 0x31D114u;
label_31d114:
    // 0x31d114: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x31d114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_31d118:
    // 0x31d118: 0xc0c556c  jal         func_3155B0
    ctx->pc = 0x31D118u;
    SET_GPR_U32(ctx, 31, 0x31D120u);
    ctx->pc = 0x31D11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D118u;
    // 0x31d11c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3155B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3155B0u, 0x31D118u, 0x31D120u)) {
        return;
    }
    ctx->pc = 0x31D120u;
label_31d120:
    // 0x31d120: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x31d120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x31d124: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31D124u;
    {
        const bool branch_taken_0x31d124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D124u;
        // 0x31d128: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d124) {
            ctx->pc = 0x31D180u;
            goto label_31d180;
        }
    }
    ctx->pc = 0x31D12Cu;
    // 0x31d12c: 0x1150c2  srl         $t2, $s1, 3
    ctx->pc = 0x31d12cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
    // 0x31d130: 0x244370c8  addiu       $v1, $v0, 0x70C8
    ctx->pc = 0x31d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28872));
    // 0x31d134: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x31d134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x31d138: 0x8d30000c  lw          $s0, 0xC($t1)
    ctx->pc = 0x31d138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x31d13c: 0x1209000e  beq         $s0, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x31D13Cu;
    {
        const bool branch_taken_0x31d13c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 9));
        ctx->pc = 0x31D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D13Cu;
        // 0x31d140: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d13c) {
            ctx->pc = 0x31D178u;
            goto label_31d178;
        }
    }
    ctx->pc = 0x31D144u;
    // 0x31d144: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x31d144u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31d148: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31d148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31d14c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x31d14cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31d150: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x31d150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x31d154: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x31d154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31d158: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31d158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d15c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x31d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x31d160: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x31d160u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x31d164: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x31d164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x31d168: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x31d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x31d16c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31d170: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x31D170u;
    {
        const bool branch_taken_0x31d170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D170u;
        // 0x31d174: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d170) {
            ctx->pc = 0x31D7D8u;
            goto label_31d7d8;
        }
    }
    ctx->pc = 0x31D178u;
label_31d178:
    // 0x31d178: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x31D178u;
    {
        const bool branch_taken_0x31d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D178u;
        // 0x31d17c: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d178) {
            ctx->pc = 0x31D270u;
            goto label_31d270;
        }
    }
    ctx->pc = 0x31D180u;
label_31d180:
    // 0x31d180: 0x112242  srl         $a0, $s1, 9
    ctx->pc = 0x31d180u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
    // 0x31d184: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D184u;
    {
        const bool branch_taken_0x31d184 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D184u;
        // 0x31d188: 0x2c820005  sltiu       $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d184) {
            ctx->pc = 0x31D194u;
            goto label_31d194;
        }
    }
    ctx->pc = 0x31D18Cu;
    // 0x31d18c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31D18Cu;
    {
        const bool branch_taken_0x31d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D18Cu;
        // 0x31d190: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d18c) {
            ctx->pc = 0x31D1F0u;
            goto label_31d1f0;
        }
    }
    ctx->pc = 0x31D194u;
label_31d194:
    // 0x31d194: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D194u;
    {
        const bool branch_taken_0x31d194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D194u;
        // 0x31d198: 0x111182  srl         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d194) {
            ctx->pc = 0x31D1A4u;
            goto label_31d1a4;
        }
    }
    ctx->pc = 0x31D19Cu;
    // 0x31d19c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31D19Cu;
    {
        const bool branch_taken_0x31d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D19Cu;
        // 0x31d1a0: 0x244a0038  addiu       $t2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d19c) {
            ctx->pc = 0x31D1F0u;
            goto label_31d1f0;
        }
    }
    ctx->pc = 0x31D1A4u;
label_31d1a4:
    // 0x31d1a4: 0x2c820015  sltiu       $v0, $a0, 0x15
    ctx->pc = 0x31d1a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x31d1a8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31D1A8u;
    {
        const bool branch_taken_0x31d1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1A8u;
        // 0x31d1ac: 0x248a005b  addiu       $t2, $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1a8) {
            ctx->pc = 0x31D1F0u;
            goto label_31d1f0;
        }
    }
    ctx->pc = 0x31D1B0u;
    // 0x31d1b0: 0x2c820055  sltiu       $v0, $a0, 0x55
    ctx->pc = 0x31d1b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x31d1b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D1B4u;
    {
        const bool branch_taken_0x31d1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1B4u;
        // 0x31d1b8: 0x111302  srl         $v0, $s1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1b4) {
            ctx->pc = 0x31D1C4u;
            goto label_31d1c4;
        }
    }
    ctx->pc = 0x31D1BCu;
    // 0x31d1bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31D1BCu;
    {
        const bool branch_taken_0x31d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1BCu;
        // 0x31d1c0: 0x244a006e  addiu       $t2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1bc) {
            ctx->pc = 0x31D1F0u;
            goto label_31d1f0;
        }
    }
    ctx->pc = 0x31D1C4u;
label_31d1c4:
    // 0x31d1c4: 0x2c820155  sltiu       $v0, $a0, 0x155
    ctx->pc = 0x31d1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x31d1c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D1C8u;
    {
        const bool branch_taken_0x31d1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1C8u;
        // 0x31d1cc: 0x1113c2  srl         $v0, $s1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1c8) {
            ctx->pc = 0x31D1D8u;
            goto label_31d1d8;
        }
    }
    ctx->pc = 0x31D1D0u;
    // 0x31d1d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31D1D0u;
    {
        const bool branch_taken_0x31d1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1D0u;
        // 0x31d1d4: 0x244a0077  addiu       $t2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1d0) {
            ctx->pc = 0x31D1F0u;
            goto label_31d1f0;
        }
    }
    ctx->pc = 0x31D1D8u;
label_31d1d8:
    // 0x31d1d8: 0x2c820555  sltiu       $v0, $a0, 0x555
    ctx->pc = 0x31d1d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x31d1dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D1DCu;
    {
        const bool branch_taken_0x31d1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1DCu;
        // 0x31d1e0: 0x111482  srl         $v0, $s1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1dc) {
            ctx->pc = 0x31D1ECu;
            goto label_31d1ec;
        }
    }
    ctx->pc = 0x31D1E4u;
    // 0x31d1e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31D1E4u;
    {
        const bool branch_taken_0x31d1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1E4u;
        // 0x31d1e8: 0x244a007c  addiu       $t2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1e4) {
            ctx->pc = 0x31D1F0u;
            goto label_31d1f0;
        }
    }
    ctx->pc = 0x31D1ECu;
label_31d1ec:
    // 0x31d1ec: 0x240a007e  addiu       $t2, $zero, 0x7E
    ctx->pc = 0x31d1ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_31d1f0:
    // 0x31d1f0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31d1f4: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x31d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x31d1f8: 0x244370c8  addiu       $v1, $v0, 0x70C8
    ctx->pc = 0x31d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28872));
    // 0x31d1fc: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x31d1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31d200: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x31d200u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x31d204: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31D204u;
    {
        const bool branch_taken_0x31d204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D204u;
        // 0x31d208: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d204) {
            ctx->pc = 0x31D21Cu;
            goto label_31d21c;
        }
    }
    ctx->pc = 0x31D20Cu;
    // 0x31d20c: 0x0  nop
    ctx->pc = 0x31d20cu;
    // NOP
label_31d210:
    // 0x31d210: 0x4e30140  bgezl       $a3, . + 4 + (0x140 << 2)
    ctx->pc = 0x31D210u;
    {
        const bool branch_taken_0x31d210 = (GPR_S64(ctx, 7) >= 0);
        if (branch_taken_0x31d210) {
            ctx->pc = 0x31D214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D210u;
            // 0x31d214: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D714u;
            goto label_31d714;
        }
    }
    ctx->pc = 0x31D218u;
    // 0x31d218: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x31d218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_31d21c:
    // 0x31d21c: 0x52080014  beql        $s0, $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31D21Cu;
    {
        const bool branch_taken_0x31d21c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        if (branch_taken_0x31d21c) {
            ctx->pc = 0x31D220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D21Cu;
            // 0x31d220: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D270u;
            goto label_31d270;
        }
    }
    ctx->pc = 0x31D224u;
    // 0x31d224: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31d228: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31d228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31d22c: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x31d22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31d230: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x31d230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31d234: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x31d234u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31d238: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D238u;
    {
        const bool branch_taken_0x31d238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D238u;
        // 0x31d23c: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d238) {
            ctx->pc = 0x31D250u;
            goto label_31d250;
        }
    }
    ctx->pc = 0x31D240u;
    // 0x31d240: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d244: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31d248: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31D248u;
    {
        const bool branch_taken_0x31d248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D248u;
        // 0x31d24c: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d248) {
            ctx->pc = 0x31D25Cu;
            goto label_31d25c;
        }
    }
    ctx->pc = 0x31D250u;
label_31d250:
    // 0x31d250: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x31d250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x31d254: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d258: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x31d258u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_31d25c:
    // 0x31d25c: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x31d25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x31d260: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x31D260u;
    {
        const bool branch_taken_0x31d260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d260) {
            ctx->pc = 0x31D210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d210;
        }
    }
    ctx->pc = 0x31D268u;
    // 0x31d268: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x31d268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x31d26c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x31d26cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_31d270:
    // 0x31d270: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31d274: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x31d274u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d278: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x31d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x31d27c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x31d27cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6870D8u));
    // 0x31d280: 0x12020086  beq         $s0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x31D280u;
    {
        const bool branch_taken_0x31d280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D280u;
        // 0x31d284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d280) {
            ctx->pc = 0x31D49Cu;
            goto label_31d49c;
        }
    }
    ctx->pc = 0x31D288u;
    // 0x31d288: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31d28c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31d290: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x31d290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31d294: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x31d294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31d298: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x31d298u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31d29c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D29Cu;
    {
        const bool branch_taken_0x31d29c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D29Cu;
        // 0x31d2a0: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d29c) {
            ctx->pc = 0x31D2B4u;
            goto label_31d2b4;
        }
    }
    ctx->pc = 0x31D2A4u;
    // 0x31d2a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d2a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31d2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31d2ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31D2ACu;
    {
        const bool branch_taken_0x31d2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2ACu;
        // 0x31d2b0: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2ac) {
            ctx->pc = 0x31D2C0u;
            goto label_31d2c0;
        }
    }
    ctx->pc = 0x31D2B4u;
label_31d2b4:
    // 0x31d2b4: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x31d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x31d2b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d2bc: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x31d2bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_31d2c0:
    // 0x31d2c0: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x31d2c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x31d2c4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31D2C4u;
    {
        const bool branch_taken_0x31d2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2C4u;
        // 0x31d2c8: 0x25c470d0  addiu       $a0, $t6, 0x70D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 28880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2c4) {
            ctx->pc = 0x31D318u;
            goto label_31d318;
        }
    }
    ctx->pc = 0x31D2CCu;
    // 0x31d2cc: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x31d2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x31d2d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d2d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x31d2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x31d2d8: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x31d2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x31d2dc: 0x25c570d0  addiu       $a1, $t6, 0x70D0
    ctx->pc = 0x31d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 28880));
    // 0x31d2e0: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x31d2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x31d2e4: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x31d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x31d2e8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x31d2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x31d2ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31d2ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31d2f0: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x31d2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x31d2f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31d2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31d2f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31d2f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31d2fc: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x31d2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x31d300: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x31d300u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x31d304: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x31d304u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x31d308: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d30c: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x31d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x31d310: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x31D310u;
    {
        const bool branch_taken_0x31d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D310u;
        // 0x31d314: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d310) {
            ctx->pc = 0x31D7DCu;
            goto label_31d7dc;
        }
    }
    ctx->pc = 0x31D318u;
label_31d318:
    // 0x31d318: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x31d318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
    // 0x31d31c: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D31Cu;
    {
        const bool branch_taken_0x31d31c = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x31D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D31Cu;
        // 0x31d320: 0xac840008  sw          $a0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d31c) {
            ctx->pc = 0x31D338u;
            goto label_31d338;
        }
    }
    ctx->pc = 0x31D324u;
    // 0x31d324: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x31d324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x31d328: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31d328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d32c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31d330: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x31D330u;
    {
        const bool branch_taken_0x31d330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D330u;
        // 0x31d334: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d330) {
            ctx->pc = 0x31D7D8u;
            goto label_31d7d8;
        }
    }
    ctx->pc = 0x31D338u;
label_31d338:
    // 0x31d338: 0x2ca20200  sltiu       $v0, $a1, 0x200
    ctx->pc = 0x31d338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x31d33c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31D33Cu;
    {
        const bool branch_taken_0x31d33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D33Cu;
        // 0x31d340: 0x538c2  srl         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d33c) {
            ctx->pc = 0x31D388u;
            goto label_31d388;
        }
    }
    ctx->pc = 0x31D344u;
    // 0x31d344: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31d348: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x31d348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31d34c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x31d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x31d350: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x31d350u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7));
    // 0x31d354: 0x2485fff8  addiu       $a1, $a0, -0x8
    ctx->pc = 0x31d354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x31d358: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x31d358u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x31d35c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d360: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x31d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31d364: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x31d364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x31d368: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d36c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31d36cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31d370: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x31d370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x31d374: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x31d374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31d378: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x31d378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31d37c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x31d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x31d380: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x31D380u;
    {
        const bool branch_taken_0x31d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D380u;
        // 0x31d384: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d380) {
            ctx->pc = 0x31D488u;
            goto label_31d488;
        }
    }
    ctx->pc = 0x31D388u;
label_31d388:
    // 0x31d388: 0x51a42  srl         $v1, $a1, 9
    ctx->pc = 0x31d388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 9));
    // 0x31d38c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D38Cu;
    {
        const bool branch_taken_0x31d38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D38Cu;
        // 0x31d390: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d38c) {
            ctx->pc = 0x31D39Cu;
            goto label_31d39c;
        }
    }
    ctx->pc = 0x31D394u;
    // 0x31d394: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31D394u;
    {
        const bool branch_taken_0x31d394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D394u;
        // 0x31d398: 0x538c2  srl         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d394) {
            ctx->pc = 0x31D3F8u;
            goto label_31d3f8;
        }
    }
    ctx->pc = 0x31D39Cu;
label_31d39c:
    // 0x31d39c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D39Cu;
    {
        const bool branch_taken_0x31d39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D39Cu;
        // 0x31d3a0: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d39c) {
            ctx->pc = 0x31D3ACu;
            goto label_31d3ac;
        }
    }
    ctx->pc = 0x31D3A4u;
    // 0x31d3a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31D3A4u;
    {
        const bool branch_taken_0x31d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3A4u;
        // 0x31d3a8: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3a4) {
            ctx->pc = 0x31D3F8u;
            goto label_31d3f8;
        }
    }
    ctx->pc = 0x31D3ACu;
label_31d3ac:
    // 0x31d3ac: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x31d3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x31d3b0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31D3B0u;
    {
        const bool branch_taken_0x31d3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3B0u;
        // 0x31d3b4: 0x2467005b  addiu       $a3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3b0) {
            ctx->pc = 0x31D3F8u;
            goto label_31d3f8;
        }
    }
    ctx->pc = 0x31D3B8u;
    // 0x31d3b8: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x31d3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x31d3bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D3BCu;
    {
        const bool branch_taken_0x31d3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3BCu;
        // 0x31d3c0: 0x51302  srl         $v0, $a1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3bc) {
            ctx->pc = 0x31D3CCu;
            goto label_31d3cc;
        }
    }
    ctx->pc = 0x31D3C4u;
    // 0x31d3c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31D3C4u;
    {
        const bool branch_taken_0x31d3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3C4u;
        // 0x31d3c8: 0x2447006e  addiu       $a3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3c4) {
            ctx->pc = 0x31D3F8u;
            goto label_31d3f8;
        }
    }
    ctx->pc = 0x31D3CCu;
label_31d3cc:
    // 0x31d3cc: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x31d3ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x31d3d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D3D0u;
    {
        const bool branch_taken_0x31d3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3D0u;
        // 0x31d3d4: 0x513c2  srl         $v0, $a1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3d0) {
            ctx->pc = 0x31D3E0u;
            goto label_31d3e0;
        }
    }
    ctx->pc = 0x31D3D8u;
    // 0x31d3d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31D3D8u;
    {
        const bool branch_taken_0x31d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3D8u;
        // 0x31d3dc: 0x24470077  addiu       $a3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3d8) {
            ctx->pc = 0x31D3F8u;
            goto label_31d3f8;
        }
    }
    ctx->pc = 0x31D3E0u;
label_31d3e0:
    // 0x31d3e0: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x31d3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x31d3e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D3E4u;
    {
        const bool branch_taken_0x31d3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3E4u;
        // 0x31d3e8: 0x51482  srl         $v0, $a1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3e4) {
            ctx->pc = 0x31D3F4u;
            goto label_31d3f4;
        }
    }
    ctx->pc = 0x31D3ECu;
    // 0x31d3ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31D3ECu;
    {
        const bool branch_taken_0x31d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3ECu;
        // 0x31d3f0: 0x2447007c  addiu       $a3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3ec) {
            ctx->pc = 0x31D3F8u;
            goto label_31d3f8;
        }
    }
    ctx->pc = 0x31D3F4u;
label_31d3f4:
    // 0x31d3f4: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x31d3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_31d3f8:
    // 0x31d3f8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x31d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x31d3fc: 0x268970c8  addiu       $t1, $s4, 0x70C8
    ctx->pc = 0x31d3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 28872));
    // 0x31d400: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x31d400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x31d404: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x31d404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31d408: 0x54c8000e  bnel        $a2, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x31D408u;
    {
        const bool branch_taken_0x31d408 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x31d408) {
            ctx->pc = 0x31D40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D408u;
            // 0x31d40c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D444u;
            goto label_31d444;
        }
    }
    ctx->pc = 0x31D410u;
    // 0x31d410: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31d410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31d414: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x31d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x31d418: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x31d418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31d41c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d420: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x31d420u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7));
    // 0x31d424: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x31d424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x31d428: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x31d428u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x31d42c: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x31d42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x31d430: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31d430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31d434: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x31d434u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x31d438: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x31d438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x31d43c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31D43Cu;
    {
        const bool branch_taken_0x31d43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D43Cu;
        // 0x31d440: 0xad250004  sw          $a1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d43c) {
            ctx->pc = 0x31D488u;
            goto label_31d488;
        }
    }
    ctx->pc = 0x31D444u;
label_31d444:
    // 0x31d444: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31d444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31d448: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x31d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x31d44c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31d44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d450: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x31d450u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31d454: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x31D454u;
    {
        const bool branch_taken_0x31d454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d454) {
            ctx->pc = 0x31D458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D454u;
            // 0x31d458: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D488u;
            goto label_31d488;
        }
    }
    ctx->pc = 0x31D45Cu;
    // 0x31d45c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31d460: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x31d460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31d464: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x31d464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_31d468:
    // 0x31d468: 0x50c80007  beql        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31D468u;
    {
        const bool branch_taken_0x31d468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x31d468) {
            ctx->pc = 0x31D46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D468u;
            // 0x31d46c: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D488u;
            goto label_31d488;
        }
    }
    ctx->pc = 0x31D470u;
    // 0x31d470: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x31d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31d474: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31d474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31d478: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x31d478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31d47c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31D47Cu;
    {
        const bool branch_taken_0x31d47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d47c) {
            ctx->pc = 0x31D480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D47Cu;
            // 0x31d480: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d468;
        }
    }
    ctx->pc = 0x31D484u;
    // 0x31d484: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x31d484u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_31d488:
    // 0x31d488: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x31d488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x31d48c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x31d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x31d490: 0xad100008  sw          $s0, 0x8($t0)
    ctx->pc = 0x31d490u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 16));
    // 0x31d494: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x31d494u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x31d498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31d49c:
    // 0x31d49c: 0x25440003  addiu       $a0, $t2, 0x3
    ctx->pc = 0x31d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x31d4a0: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x31d4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x31d4a4: 0x268370c8  addiu       $v1, $s4, 0x70C8
    ctx->pc = 0x31d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28872));
    // 0x31d4a8: 0x142200b  movn        $a0, $t2, $v0
    ctx->pc = 0x31d4a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10));
    // 0x31d4ac: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x31d4acu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31d4b0: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x31d4b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x31d4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d4b8: 0x823014  dsllv       $a2, $v0, $a0
    ctx->pc = 0x31d4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x31d4bc: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x31d4bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31d4c0: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x31D4C0u;
    {
        const bool branch_taken_0x31d4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4C0u;
        // 0x31d4c4: 0x268370c8  addiu       $v1, $s4, 0x70C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4c0) {
            ctx->pc = 0x31D630u;
            goto label_31d630;
        }
    }
    ctx->pc = 0x31D4C8u;
    // 0x31d4c8: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x31d4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x31d4cc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31D4CCu;
    {
        const bool branch_taken_0x31d4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4CCu;
        // 0x31d4d0: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4cc) {
            ctx->pc = 0x31D50Cu;
            goto label_31d50c;
        }
    }
    ctx->pc = 0x31D4D4u;
    // 0x31d4d4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x31d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x31d4d8: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x31d4d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x31d4dc: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x31d4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x31d4e0: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x31d4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x31d4e4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31D4E4u;
    {
        const bool branch_taken_0x31d4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4E4u;
        // 0x31d4e8: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4e4) {
            ctx->pc = 0x31D508u;
            goto label_31d508;
        }
    }
    ctx->pc = 0x31D4ECu;
    // 0x31d4ec: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x31d4ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31d4f0:
    // 0x31d4f0: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x31d4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x31d4f4: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x31d4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x31d4f8: 0x0  nop
    ctx->pc = 0x31d4f8u;
    // NOP
    // 0x31d4fc: 0x0  nop
    ctx->pc = 0x31d4fcu;
    // NOP
    // 0x31d500: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31D500u;
    {
        const bool branch_taken_0x31d500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D500u;
        // 0x31d504: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d500) {
            ctx->pc = 0x31D4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d4f0;
        }
    }
    ctx->pc = 0x31D508u;
label_31d508:
    // 0x31d508: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31d508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_31d50c:
    // 0x31d50c: 0x244c70c8  addiu       $t4, $v0, 0x70C8
    ctx->pc = 0x31d50cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 28872));
    // 0x31d510: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x31d510u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d514: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x31d514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_31d518:
    // 0x31d518: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x31d518u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d51c: 0x4c4821  addu        $t1, $v0, $t4
    ctx->pc = 0x31d51cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x31d520: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x31d520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d524: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x31d524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_31d528:
    // 0x31d528: 0x12080019  beq         $s0, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31D528u;
    {
        const bool branch_taken_0x31d528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x31D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D528u;
        // 0x31d52c: 0x2942003f  slti        $v0, $t2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d528) {
            ctx->pc = 0x31D590u;
            goto label_31d590;
        }
    }
    ctx->pc = 0x31D530u;
    // 0x31d530: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x31d530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x31d534: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x31d534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x31d538: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31d53c: 0x0  nop
    ctx->pc = 0x31d53cu;
    // NOP
label_31d540:
    // 0x31d540: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x31d540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x31d544: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x31d544u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31d548: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D548u;
    {
        const bool branch_taken_0x31d548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D548u;
        // 0x31d54c: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d548) {
            ctx->pc = 0x31D560u;
            goto label_31d560;
        }
    }
    ctx->pc = 0x31D550u;
    // 0x31d550: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d554: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31d554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31d558: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31D558u;
    {
        const bool branch_taken_0x31d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D558u;
        // 0x31d55c: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d558) {
            ctx->pc = 0x31D56Cu;
            goto label_31d56c;
        }
    }
    ctx->pc = 0x31D560u;
label_31d560:
    // 0x31d560: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x31d560u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x31d564: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d568: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x31d568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_31d56c:
    // 0x31d56c: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x31d56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x31d570: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x31D570u;
    {
        const bool branch_taken_0x31d570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d570) {
            ctx->pc = 0x31D574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D570u;
            // 0x31d574: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D734u;
            goto label_31d734;
        }
    }
    ctx->pc = 0x31D578u;
    // 0x31d578: 0x4e10084  bgez        $a3, . + 4 + (0x84 << 2)
    ctx->pc = 0x31D578u;
    {
        const bool branch_taken_0x31d578 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x31D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D578u;
        // 0x31d57c: 0x2051821  addu        $v1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d578) {
            ctx->pc = 0x31D78Cu;
            goto label_31d78c;
        }
    }
    ctx->pc = 0x31D580u;
    // 0x31d580: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x31d580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31d584: 0x5608ffee  bnel        $s0, $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31D584u;
    {
        const bool branch_taken_0x31d584 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 8));
        if (branch_taken_0x31d584) {
            ctx->pc = 0x31D588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D584u;
            // 0x31d588: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d540;
        }
    }
    ctx->pc = 0x31D58Cu;
    // 0x31d58c: 0x2942003f  slti        $v0, $t2, 0x3F
    ctx->pc = 0x31d58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
label_31d590:
    // 0x31d590: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D590u;
    {
        const bool branch_taken_0x31d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D590u;
        // 0x31d594: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d590) {
            ctx->pc = 0x31D5A0u;
            goto label_31d5a0;
        }
    }
    ctx->pc = 0x31D598u;
    // 0x31d598: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x31d598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x31d59c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x31d59cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_31d5a0:
    // 0x31d5a0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x31d5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31d5a4: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x31d5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x31d5a8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x31D5A8u;
    {
        const bool branch_taken_0x31d5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d5a8) {
            ctx->pc = 0x31D5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D5A8u;
            // 0x31d5ac: 0x8d10000c  lw          $s0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d528;
        }
    }
    ctx->pc = 0x31D5B0u;
label_31d5b0:
    // 0x31d5b0: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x31d5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x31d5b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31D5B4u;
    {
        const bool branch_taken_0x31d5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5B4u;
        // 0x31d5b8: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5b4) {
            ctx->pc = 0x31D610u;
            goto label_31d610;
        }
    }
    ctx->pc = 0x31D5BCu;
    // 0x31d5bc: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x31d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x31d5c0: 0x1049fffb  beq         $v0, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31D5C0u;
    {
        const bool branch_taken_0x31d5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x31D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5C0u;
        // 0x31d5c4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5c0) {
            ctx->pc = 0x31D5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d5b0;
        }
    }
    ctx->pc = 0x31D5C8u;
label_31d5c8:
    // 0x31d5c8: 0x9d830004  lwu         $v1, 0x4($t4)
    ctx->pc = 0x31d5c8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x31d5cc: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x31d5ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x31d5d0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x31d5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31d5d4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x31D5D4u;
    {
        const bool branch_taken_0x31d5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d5d4) {
            ctx->pc = 0x31D5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D5D4u;
            // 0x31d5d8: 0x268370c8  addiu       $v1, $s4, 0x70C8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28872));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D630u;
            goto label_31d630;
        }
    }
    ctx->pc = 0x31D5DCu;
    // 0x31d5dc: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x31D5DCu;
    {
        const bool branch_taken_0x31d5dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5DCu;
        // 0x31d5e0: 0xc31024  and         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5dc) {
            ctx->pc = 0x31D62Cu;
            goto label_31d62c;
        }
    }
    ctx->pc = 0x31D5E4u;
    // 0x31d5e4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x31D5E4u;
    {
        const bool branch_taken_0x31d5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5E4u;
        // 0x31d5e8: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5e4) {
            ctx->pc = 0x31D518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d518;
        }
    }
    ctx->pc = 0x31D5ECu;
    // 0x31d5ec: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x31d5ecu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_31d5f0:
    // 0x31d5f0: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x31d5f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x31d5f4: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x31d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x31d5f8: 0x0  nop
    ctx->pc = 0x31d5f8u;
    // NOP
    // 0x31d5fc: 0x0  nop
    ctx->pc = 0x31d5fcu;
    // NOP
    // 0x31d600: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31D600u;
    {
        const bool branch_taken_0x31d600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D600u;
        // 0x31d604: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d600) {
            ctx->pc = 0x31D5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d5f0;
        }
    }
    ctx->pc = 0x31D608u;
    // 0x31d608: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x31D608u;
    {
        const bool branch_taken_0x31d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D608u;
        // 0x31d60c: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d608) {
            ctx->pc = 0x31D518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d518;
        }
    }
    ctx->pc = 0x31D610u;
label_31d610:
    // 0x31d610: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x31d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x31d614: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x31d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31d618: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31d618u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31d61c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31d61cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31d620: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31d620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d624: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x31D624u;
    {
        const bool branch_taken_0x31d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D624u;
        // 0x31d628: 0xad830004  sw          $v1, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d624) {
            ctx->pc = 0x31D5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d5c8;
        }
    }
    ctx->pc = 0x31D62Cu;
label_31d62c:
    // 0x31d62c: 0x268370c8  addiu       $v1, $s4, 0x70C8
    ctx->pc = 0x31d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28872));
label_31d630:
    // 0x31d630: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31d634: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x31d634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31d638: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x31d638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x31d63c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31d640: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31d640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d644: 0x51202b  sltu        $a0, $v0, $s1
    ctx->pc = 0x31d644u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31d648: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D648u;
    {
        const bool branch_taken_0x31d648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d648) {
            ctx->pc = 0x31D64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D648u;
            // 0x31d64c: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D664u;
            goto label_31d664;
        }
    }
    ctx->pc = 0x31D650u;
    // 0x31d650: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x31d650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x31d654: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d658: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31d65c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31D65Cu;
    {
        const bool branch_taken_0x31d65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D65Cu;
        // 0x31d660: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d65c) {
            ctx->pc = 0x31D66Cu;
            goto label_31d66c;
        }
    }
    ctx->pc = 0x31D664u;
label_31d664:
    // 0x31d664: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d668: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x31d668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_31d66c:
    // 0x31d66c: 0x269270c8  addiu       $s2, $s4, 0x70C8
    ctx->pc = 0x31d66cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 28872));
    // 0x31d670: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x31d670u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x31d674: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x31d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x31d678: 0x3610fffc  ori         $s0, $s0, 0xFFFC
    ctx->pc = 0x31d678u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65532);
    // 0x31d67c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31d680: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x31d680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x31d684: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x31d684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31d688: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D688u;
    {
        const bool branch_taken_0x31d688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D688u;
        // 0x31d68c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d688) {
            ctx->pc = 0x31D69Cu;
            goto label_31d69c;
        }
    }
    ctx->pc = 0x31D690u;
    // 0x31d690: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x31d690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x31d694: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x31D694u;
    {
        const bool branch_taken_0x31d694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D694u;
        // 0x31d698: 0x268670c8  addiu       $a2, $s4, 0x70C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d694) {
            ctx->pc = 0x31D7B0u;
            goto label_31d7b0;
        }
    }
    ctx->pc = 0x31D69Cu;
label_31d69c:
    // 0x31d69c: 0xc0c739c  jal         func_31CE70
    ctx->pc = 0x31D69Cu;
    SET_GPR_U32(ctx, 31, 0x31D6A4u);
    ctx->pc = 0x31D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D69Cu;
    // 0x31d6a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CE70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31CE70u, 0x31D69Cu, 0x31D6A4u)) {
        return;
    }
    ctx->pc = 0x31D6A4u;
label_31d6a4:
    // 0x31d6a4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x31d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x31d6a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31d6ac: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x31d6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x31d6b0: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x31d6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31d6b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D6B4u;
    {
        const bool branch_taken_0x31d6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6B4u;
        // 0x31d6b8: 0x2231023  subu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6b4) {
            ctx->pc = 0x31D6CCu;
            goto label_31d6cc;
        }
    }
    ctx->pc = 0x31D6BCu;
    // 0x31d6bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d6c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31d6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31d6c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31D6C4u;
    {
        const bool branch_taken_0x31d6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6C4u;
        // 0x31d6c8: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6c4) {
            ctx->pc = 0x31D6D8u;
            goto label_31d6d8;
        }
    }
    ctx->pc = 0x31D6CCu;
label_31d6cc:
    // 0x31d6cc: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x31d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x31d6d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d6d4: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x31d6d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_31d6d8:
    // 0x31d6d8: 0x268270c8  addiu       $v0, $s4, 0x70C8
    ctx->pc = 0x31d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 28872));
    // 0x31d6dc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31d6e0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x31d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x31d6e4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x31d6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31d6e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31d6ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31d6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31d6f0: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x31d6f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31d6f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D6F4u;
    {
        const bool branch_taken_0x31d6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6F4u;
        // 0x31d6f8: 0x28e20010  slti        $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6f4) {
            ctx->pc = 0x31D704u;
            goto label_31d704;
        }
    }
    ctx->pc = 0x31D6FCu;
    // 0x31d6fc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x31D6FCu;
    {
        const bool branch_taken_0x31d6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6FCu;
        // 0x31d700: 0x268670c8  addiu       $a2, $s4, 0x70C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6fc) {
            ctx->pc = 0x31D7B0u;
            goto label_31d7b0;
        }
    }
    ctx->pc = 0x31D704u;
label_31d704:
    // 0x31d704: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31D704u;
    SET_GPR_U32(ctx, 31, 0x31D70Cu);
    ctx->pc = 0x31D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D704u;
    // 0x31d708: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31D704u, 0x31D70Cu)) {
        return;
    }
    ctx->pc = 0x31D70Cu;
label_31d70c:
    // 0x31d70c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x31D70Cu;
    {
        const bool branch_taken_0x31d70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D70Cu;
        // 0x31d710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d70c) {
            ctx->pc = 0x31D7E8u;
            goto label_31d7e8;
        }
    }
    ctx->pc = 0x31D714u;
label_31d714:
    // 0x31d714: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x31d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x31d718: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x31d718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31d71c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d720: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x31d720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x31d724: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x31d724u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x31d728: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31d72c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31D72Cu;
    {
        const bool branch_taken_0x31d72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D72Cu;
        // 0x31d730: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d72c) {
            ctx->pc = 0x31D7D8u;
            goto label_31d7d8;
        }
    }
    ctx->pc = 0x31D734u;
label_31d734:
    // 0x31d734: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x31d734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x31d738: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x31d738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31d73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d740: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x31d740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x31d744: 0x25c370d0  addiu       $v1, $t6, 0x70D0
    ctx->pc = 0x31d744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 28880));
    // 0x31d748: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x31d748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x31d74c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x31d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x31d750: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x31d750u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x31d754: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x31d754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x31d758: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x31d758u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x31d75c: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x31d75cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x31d760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d764: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31d764u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31d768: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x31d768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x31d76c: 0x1053021  addu        $a2, $t0, $a1
    ctx->pc = 0x31d76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x31d770: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x31d770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x31d774: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31d774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d778: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x31d778u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x31d77c: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x31d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x31d780: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x31d780u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x31d784: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31D784u;
    {
        const bool branch_taken_0x31d784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D784u;
        // 0x31d788: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d784) {
            ctx->pc = 0x31D7DCu;
            goto label_31d7dc;
        }
    }
    ctx->pc = 0x31D78Cu;
label_31d78c:
    // 0x31d78c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31d78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d790: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31d794: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31d794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31d798: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x31d798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x31d79c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x31d79cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31d7a0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x31d7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31d7a4: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x31d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x31d7a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31D7A8u;
    {
        const bool branch_taken_0x31d7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7A8u;
        // 0x31d7ac: 0xad060008  sw          $a2, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7a8) {
            ctx->pc = 0x31D7DCu;
            goto label_31d7dc;
        }
    }
    ctx->pc = 0x31D7B0u;
label_31d7b0:
    // 0x31d7b0: 0x36250001  ori         $a1, $s1, 0x1
    ctx->pc = 0x31d7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x31d7b4: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x31d7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31d7b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d7bc: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x31d7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x31d7c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31d7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d7c4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x31d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x31d7c8: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x31d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x31d7cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d7d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31d7d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31d7d4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x31d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_31d7d8:
    // 0x31d7d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x31d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_31d7dc:
    // 0x31d7dc: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31D7DCu;
    SET_GPR_U32(ctx, 31, 0x31D7E4u);
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31D7DCu, 0x31D7E4u)) {
        return;
    }
    ctx->pc = 0x31D7E4u;
label_31d7e4:
    // 0x31d7e4: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x31d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_31d7e8:
    // 0x31d7e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31d7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d7ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31d7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d7f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31d7f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d7f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31d7f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d7f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31d7f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d800: 0x3e00008  jr          $ra
    ctx->pc = 0x31D800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D800u;
        // 0x31d804: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D808u;
}
