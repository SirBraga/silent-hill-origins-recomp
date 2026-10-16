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

// Function: sub_0031BDA0
// Address: 0x31bda0 - 0x31bf58
void sub_0031BDA0_0x31bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BDA0_0x31bda0");
#endif

    switch (ctx->pc) {
        case 0x31be38u: goto label_31be38;
        case 0x31bec8u: goto label_31bec8;
        case 0x31bf30u: goto label_31bf30;
        default: break;
    }

    ctx->pc = 0x31bda0u;

    // 0x31bda0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31bda4: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x31bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x31bda8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x31bdac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31bdacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31bdb0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31bdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x31bdb4: 0x2450000a  addiu       $s0, $v0, 0xA
    ctx->pc = 0x31bdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x31bdb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31bdb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bdbc: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x31bdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x31bdc0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x31bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31bdc4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31bdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x31bdc8: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x31bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x31bdcc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31bdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31bdd0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x31bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x31bdd4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x31bdd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bdd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31bddc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x31bddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bde0: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x31bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x31bde4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31bde4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bde8: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x31bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x31bdec: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BDECu;
    {
        const bool branch_taken_0x31bdec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDECu;
        // 0x31bdf0: 0x2467fffe  addiu       $a3, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bdec) {
            ctx->pc = 0x31BE04u;
            goto label_31be04;
        }
    }
    ctx->pc = 0x31BDF4u;
    // 0x31bdf4: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x31BDF4u;
    {
        const bool branch_taken_0x31bdf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDF4u;
        // 0x31bdf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bdf4) {
            ctx->pc = 0x31BF38u;
            goto label_31bf38;
        }
    }
    ctx->pc = 0x31BDFCu;
    // 0x31bdfc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BDFCu;
    {
        const bool branch_taken_0x31bdfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDFCu;
        // 0x31be00: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bdfc) {
            ctx->pc = 0x31BE0Cu;
            goto label_31be0c;
        }
    }
    ctx->pc = 0x31BE04u;
label_31be04:
    // 0x31be04: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x31BE04u;
    {
        const bool branch_taken_0x31be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE04u;
        // 0x31be08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be04) {
            ctx->pc = 0x31BF38u;
            goto label_31bf38;
        }
    }
    ctx->pc = 0x31BE0Cu;
label_31be0c:
    // 0x31be0c: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x31be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x31be10: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x31be10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31be14: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31BE14u;
    {
        const bool branch_taken_0x31be14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE14u;
        // 0x31be18: 0xafc60004  sw          $a2, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be14) {
            ctx->pc = 0x31BE94u;
            goto label_31be94;
        }
    }
    ctx->pc = 0x31BE1Cu;
    // 0x31be1c: 0x240d0045  addiu       $t5, $zero, 0x45
    ctx->pc = 0x31be1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x31be20: 0x240c002e  addiu       $t4, $zero, 0x2E
    ctx->pc = 0x31be20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x31be24: 0x240b0065  addiu       $t3, $zero, 0x65
    ctx->pc = 0x31be24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x31be28: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x31be28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31be2c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x31be2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31be30: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x31be30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31be34: 0x0  nop
    ctx->pc = 0x31be34u;
    // NOP
label_31be38:
    // 0x31be38: 0x106d000f  beq         $v1, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x31BE38u;
    {
        const bool branch_taken_0x31be38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x31BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE38u;
        // 0x31be3c: 0x28620046  slti        $v0, $v1, 0x46 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be38) {
            ctx->pc = 0x31BE78u;
            goto label_31be78;
        }
    }
    ctx->pc = 0x31BE40u;
    // 0x31be40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BE40u;
    {
        const bool branch_taken_0x31be40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31be40) {
            ctx->pc = 0x31BE58u;
            goto label_31be58;
        }
    }
    ctx->pc = 0x31BE48u;
    // 0x31be48: 0x106c0007  beq         $v1, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x31BE48u;
    {
        const bool branch_taken_0x31be48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x31BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE48u;
        // 0x31be4c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be48) {
            ctx->pc = 0x31BE68u;
            goto label_31be68;
        }
    }
    ctx->pc = 0x31BE50u;
    // 0x31be50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31BE50u;
    {
        const bool branch_taken_0x31be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE50u;
        // 0x31be54: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be50) {
            ctx->pc = 0x31BE80u;
            goto label_31be80;
        }
    }
    ctx->pc = 0x31BE58u;
label_31be58:
    // 0x31be58: 0x506b0008  beql        $v1, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x31BE58u;
    {
        const bool branch_taken_0x31be58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x31be58) {
            ctx->pc = 0x31BE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BE58u;
            // 0x31be5c: 0xafc90000  sw          $t1, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BE7Cu;
            goto label_31be7c;
        }
    }
    ctx->pc = 0x31BE60u;
    // 0x31be60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31BE60u;
    {
        const bool branch_taken_0x31be60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE60u;
        // 0x31be64: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be60) {
            ctx->pc = 0x31BE80u;
            goto label_31be80;
        }
    }
    ctx->pc = 0x31BE68u;
label_31be68:
    // 0x31be68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BE68u;
    {
        const bool branch_taken_0x31be68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE68u;
        // 0x31be6c: 0xafc40004  sw          $a0, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be68) {
            ctx->pc = 0x31BE7Cu;
            goto label_31be7c;
        }
    }
    ctx->pc = 0x31BE70u;
    // 0x31be70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31BE70u;
    {
        const bool branch_taken_0x31be70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE70u;
        // 0x31be74: 0xafca0000  sw          $t2, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be70) {
            ctx->pc = 0x31BE7Cu;
            goto label_31be7c;
        }
    }
    ctx->pc = 0x31BE78u;
label_31be78:
    // 0x31be78: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x31be78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
label_31be7c:
    // 0x31be7c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x31be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_31be80:
    // 0x31be80: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x31be80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31be84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BE84u;
    {
        const bool branch_taken_0x31be84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE84u;
        // 0x31be88: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be84) {
            ctx->pc = 0x31BE94u;
            goto label_31be94;
        }
    }
    ctx->pc = 0x31BE8Cu;
    // 0x31be8c: 0x5449ffea  bnel        $v0, $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31BE8Cu;
    {
        const bool branch_taken_0x31be8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x31be8c) {
            ctx->pc = 0x31BE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BE8Cu;
            // 0x31be90: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31be38;
        }
    }
    ctx->pc = 0x31BE94u;
label_31be94:
    // 0x31be94: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x31be94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x31be98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31be9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BE9Cu;
    {
        const bool branch_taken_0x31be9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE9Cu;
        // 0x31bea0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be9c) {
            ctx->pc = 0x31BEACu;
            goto label_31beac;
        }
    }
    ctx->pc = 0x31BEA4u;
    // 0x31bea4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x31BEA4u;
    {
        const bool branch_taken_0x31bea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BEA4u;
        // 0x31bea8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bea4) {
            ctx->pc = 0x31BF38u;
            goto label_31bf38;
        }
    }
    ctx->pc = 0x31BEACu;
label_31beac:
    // 0x31beac: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x31beacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31beb0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31BEB0u;
    {
        const bool branch_taken_0x31beb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BEB0u;
        // 0x31beb4: 0x8fc90004  lw          $t1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31beb0) {
            ctx->pc = 0x31BF14u;
            goto label_31bf14;
        }
    }
    ctx->pc = 0x31BEB8u;
    // 0x31beb8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x31beb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31bebc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31bebcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bec0: 0x240a002c  addiu       $t2, $zero, 0x2C
    ctx->pc = 0x31bec0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x31bec4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x31bec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_31bec8:
    // 0x31bec8: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x31bec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31becc: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x31beccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x31bed0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31BED0u;
    {
        const bool branch_taken_0x31bed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BED0u;
        // 0x31bed4: 0x24e7fffe  addiu       $a3, $a3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bed0) {
            ctx->pc = 0x31BF04u;
            goto label_31bf04;
        }
    }
    ctx->pc = 0x31BED8u;
    // 0x31bed8: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x31bed8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31bedc: 0x50cb0001  beql        $a2, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x31BEDCu;
    {
        const bool branch_taken_0x31bedc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x31bedc) {
            ctx->pc = 0x31BEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BEDCu;
            // 0x31bee0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BEE4u;
            goto label_31bee4;
        }
    }
    ctx->pc = 0x31BEE4u;
label_31bee4:
    // 0x31bee4: 0x1010  mfhi        $v0
    ctx->pc = 0x31bee4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31bee8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31BEE8u;
    {
        const bool branch_taken_0x31bee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bee8) {
            ctx->pc = 0x31BEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BEE8u;
            // 0x31beec: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BF04u;
            goto label_31bf04;
        }
    }
    ctx->pc = 0x31BEF0u;
    // 0x31bef0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BEF0u;
    {
        const bool branch_taken_0x31bef0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BEF0u;
        // 0x31bef4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bef0) {
            ctx->pc = 0x31BF04u;
            goto label_31bf04;
        }
    }
    ctx->pc = 0x31BEF8u;
    // 0x31bef8: 0xa4ea0000  sh          $t2, 0x0($a3)
    ctx->pc = 0x31bef8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x31befc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31befcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31bf00: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x31bf00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_31bf04:
    // 0x31bf04: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x31bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x31bf08: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x31bf08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31bf0c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31BF0Cu;
    {
        const bool branch_taken_0x31bf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bf0c) {
            ctx->pc = 0x31BF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BF0Cu;
            // 0x31bf10: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bec8;
        }
    }
    ctx->pc = 0x31BF14u;
label_31bf14:
    // 0x31bf14: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x31bf14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31bf18: 0x2610fff6  addiu       $s0, $s0, -0xA
    ctx->pc = 0x31bf18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    // 0x31bf1c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x31bf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf24: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x31bf24u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x31bf28: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BF28u;
    SET_GPR_U32(ctx, 31, 0x31BF30u);
    ctx->pc = 0x31BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF28u;
    // 0x31bf2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BF28u, 0x31BF30u)) {
        return;
    }
    ctx->pc = 0x31BF30u;
label_31bf30:
    // 0x31bf30: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x31bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x31bf34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31bf34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31bf38:
    // 0x31bf38: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31bf38u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf3c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31bf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31bf40: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31bf40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31bf44: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31bf44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31bf48: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x31bf48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31bf4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31bf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x31BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF50u;
        // 0x31bf54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BF58u;
}
