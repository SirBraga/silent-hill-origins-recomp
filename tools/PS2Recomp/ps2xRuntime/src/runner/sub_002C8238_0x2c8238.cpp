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

// Function: sub_002C8238
// Address: 0x2c8238 - 0x2c8cc0
void sub_002C8238_0x2c8238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8238_0x2c8238");
#endif

    switch (ctx->pc) {
        case 0x2c8310u: goto label_2c8310;
        case 0x2c83b4u: goto label_2c83b4;
        case 0x2c8490u: goto label_2c8490;
        case 0x2c8560u: goto label_2c8560;
        case 0x2c8578u: goto label_2c8578;
        case 0x2c85a8u: goto label_2c85a8;
        case 0x2c8820u: goto label_2c8820;
        case 0x2c8854u: goto label_2c8854;
        case 0x2c8930u: goto label_2c8930;
        case 0x2c8a00u: goto label_2c8a00;
        case 0x2c8a18u: goto label_2c8a18;
        case 0x2c8a48u: goto label_2c8a48;
        default: break;
    }

    ctx->pc = 0x2c8238u;

    // 0x2c8238: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2c8238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2c823c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2c823cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2c8240: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2c8240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2c8244: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c8244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8248: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c8248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2c824c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c824cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8250: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2c8250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2c8254: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c8254u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8258: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x2c8258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c825c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2C825Cu;
    {
        const bool branch_taken_0x2c825c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C825Cu;
        // 0x2c8260: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c825c) {
            ctx->pc = 0x2C83A0u;
            goto label_2c83a0;
        }
    }
    ctx->pc = 0x2C8264u;
    // 0x2c8264: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c8264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8268: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c8268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2c826c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c826cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8270: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2C8270u;
    {
        const bool branch_taken_0x2c8270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8270u;
        // 0x2c8274: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8270) {
            ctx->pc = 0x2C838Cu;
            goto label_2c838c;
        }
    }
    ctx->pc = 0x2C8278u;
    // 0x2c8278: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c8278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c827c: 0x262600dc  addiu       $a2, $s1, 0xDC
    ctx->pc = 0x2c827cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    // 0x2c8280: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C8280u;
    {
        const bool branch_taken_0x2c8280 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2C8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8280u;
        // 0x2c8284: 0x32050003  andi        $a1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8280) {
            ctx->pc = 0x2C82E4u;
            goto label_2c82e4;
        }
    }
    ctx->pc = 0x2C8288u;
    // 0x2c8288: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C8288u;
    {
        const bool branch_taken_0x2c8288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8288u;
        // 0x2c828c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8288) {
            ctx->pc = 0x2C830Cu;
            goto label_2c830c;
        }
    }
    ctx->pc = 0x2C8290u;
    // 0x2c8290: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C8290u;
    {
        const bool branch_taken_0x2c8290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8290) {
            ctx->pc = 0x2C8294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8290u;
            // 0x2c8294: 0x8cc2ffd0  lw          $v0, -0x30($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C82E8u;
            goto label_2c82e8;
        }
    }
    ctx->pc = 0x2C8298u;
    // 0x2c8298: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2c8298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c829c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C829Cu;
    {
        const bool branch_taken_0x2c829c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C829Cu;
        // 0x2c82a0: 0x8cc2ffd0  lw          $v0, -0x30($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c829c) {
            ctx->pc = 0x2C82C4u;
            goto label_2c82c4;
        }
    }
    ctx->pc = 0x2C82A4u;
    // 0x2c82a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C82A4u;
    {
        const bool branch_taken_0x2c82a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82A4u;
        // 0x2c82a8: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82a4) {
            ctx->pc = 0x2C82B8u;
            goto label_2c82b8;
        }
    }
    ctx->pc = 0x2C82ACu;
    // 0x2c82ac: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x2c82acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x2c82b0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2c82b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c82b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c82b8:
    // 0x2c82b8: 0x262601bc  addiu       $a2, $s1, 0x1BC
    ctx->pc = 0x2c82b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x2c82bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c82bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c82c0: 0x8cc2ffd0  lw          $v0, -0x30($a2)
    ctx->pc = 0x2c82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967248)));
label_2c82c4:
    // 0x2c82c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C82C4u;
    {
        const bool branch_taken_0x2c82c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c82c4) {
            ctx->pc = 0x2C82C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C82C4u;
            // 0x2c82c8: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C82DCu;
            goto label_2c82dc;
        }
    }
    ctx->pc = 0x2C82CCu;
    // 0x2c82cc: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x2c82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x2c82d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c82d4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2c82d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c82d8: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x2c82d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_2c82dc:
    // 0x2c82dc: 0x24c600e0  addiu       $a2, $a2, 0xE0
    ctx->pc = 0x2c82dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x2c82e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c82e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c82e4:
    // 0x2c82e4: 0x8cc2ffd0  lw          $v0, -0x30($a2)
    ctx->pc = 0x2c82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967248)));
label_2c82e8:
    // 0x2c82e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C82E8u;
    {
        const bool branch_taken_0x2c82e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82E8u;
        // 0x2c82ec: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82e8) {
            ctx->pc = 0x2C82FCu;
            goto label_2c82fc;
        }
    }
    ctx->pc = 0x2C82F0u;
    // 0x2c82f0: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x2c82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x2c82f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c82f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c82f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2c82f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c82fc:
    // 0x2c82fc: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x2c82fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x2c8300: 0xf0102b  sltu        $v0, $a3, $s0
    ctx->pc = 0x2c8300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c8304: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C8304u;
    {
        const bool branch_taken_0x2c8304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8304u;
        // 0x2c8308: 0x24c600e0  addiu       $a2, $a2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8304) {
            ctx->pc = 0x2C8388u;
            goto label_2c8388;
        }
    }
    ctx->pc = 0x2C830Cu;
label_2c830c:
    // 0x2c830c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c830cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c8310:
    // 0x2c8310: 0x8cc2ffd0  lw          $v0, -0x30($a2)
    ctx->pc = 0x2c8310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967248)));
    // 0x2c8314: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8314u;
    {
        const bool branch_taken_0x2c8314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8314) {
            ctx->pc = 0x2C8318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8314u;
            // 0x2c8318: 0x8cc200b0  lw          $v0, 0xB0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C832Cu;
            goto label_2c832c;
        }
    }
    ctx->pc = 0x2C831Cu;
    // 0x2c831c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x2c831cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x2c8320: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c8320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c8324: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2c8324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8328: 0x8cc200b0  lw          $v0, 0xB0($a2)
    ctx->pc = 0x2c8328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
label_2c832c:
    // 0x2c832c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C832Cu;
    {
        const bool branch_taken_0x2c832c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C832Cu;
        // 0x2c8330: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c832c) {
            ctx->pc = 0x2C8340u;
            goto label_2c8340;
        }
    }
    ctx->pc = 0x2C8334u;
    // 0x2c8334: 0xaca800e0  sw          $t0, 0xE0($a1)
    ctx->pc = 0x2c8334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 8));
    // 0x2c8338: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c8338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c833c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2c833cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8340:
    // 0x2c8340: 0x8cc20190  lw          $v0, 0x190($a2)
    ctx->pc = 0x2c8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 400)));
    // 0x2c8344: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8344u;
    {
        const bool branch_taken_0x2c8344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8344u;
        // 0x2c8348: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8344) {
            ctx->pc = 0x2C8358u;
            goto label_2c8358;
        }
    }
    ctx->pc = 0x2C834Cu;
    // 0x2c834c: 0xaca801c0  sw          $t0, 0x1C0($a1)
    ctx->pc = 0x2c834cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 448), GPR_U32(ctx, 8));
    // 0x2c8350: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c8350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c8354: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2c8354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8358:
    // 0x2c8358: 0x8cc20270  lw          $v0, 0x270($a2)
    ctx->pc = 0x2c8358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
    // 0x2c835c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C835Cu;
    {
        const bool branch_taken_0x2c835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C835Cu;
        // 0x2c8360: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c835c) {
            ctx->pc = 0x2C8370u;
            goto label_2c8370;
        }
    }
    ctx->pc = 0x2C8364u;
    // 0x2c8364: 0xaca802a0  sw          $t0, 0x2A0($a1)
    ctx->pc = 0x2c8364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 672), GPR_U32(ctx, 8));
    // 0x2c8368: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c8368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c836c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2c836cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8370:
    // 0x2c8370: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2c8370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2c8374: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x2c8374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x2c8378: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x2c8378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x2c837c: 0xf0102b  sltu        $v0, $a3, $s0
    ctx->pc = 0x2c837cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c8380: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2C8380u;
    {
        const bool branch_taken_0x2c8380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8380u;
        // 0x2c8384: 0x24c60380  addiu       $a2, $a2, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8380) {
            ctx->pc = 0x2C8310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8310;
        }
    }
    ctx->pc = 0x2C8388u;
label_2c8388:
    // 0x2c8388: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x2c8388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_2c838c:
    // 0x2c838c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2c838cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8390: 0x54400244  bnel        $v0, $zero, . + 4 + (0x244 << 2)
    ctx->pc = 0x2C8390u;
    {
        const bool branch_taken_0x2c8390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8390) {
            ctx->pc = 0x2C8394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8390u;
            // 0x2c8394: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8CA4u;
            goto label_2c8ca4;
        }
    }
    ctx->pc = 0x2C8398u;
    // 0x2c8398: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2C8398u;
    {
        const bool branch_taken_0x2c8398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8398u;
        // 0x2c839c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8398) {
            ctx->pc = 0x2C8550u;
            goto label_2c8550;
        }
    }
    ctx->pc = 0x2C83A0u;
label_2c83a0:
    // 0x2c83a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c83a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c83a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c83a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c83a8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2c83a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c83ac: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2C83ACu;
    SET_GPR_U32(ctx, 31, 0x2C83B4u);
    ctx->pc = 0x2C83B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C83ACu;
    // 0x2c83b0: 0x24120010  addiu       $s2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2C83ACu, 0x2C83B4u)) {
        return;
    }
    ctx->pc = 0x2C83B4u;
label_2c83b4:
    // 0x2c83b4: 0x12000065  beqz        $s0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2C83B4u;
    {
        const bool branch_taken_0x2c83b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83B4u;
        // 0x2c83b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83b4) {
            ctx->pc = 0x2C854Cu;
            goto label_2c854c;
        }
    }
    ctx->pc = 0x2C83BCu;
    // 0x2c83bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c83bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c83c0: 0x262500dc  addiu       $a1, $s1, 0xDC
    ctx->pc = 0x2c83c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    // 0x2c83c4: 0x1a000021  blez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C83C4u;
    {
        const bool branch_taken_0x2c83c4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2C83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83C4u;
        // 0x2c83c8: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83c4) {
            ctx->pc = 0x2C844Cu;
            goto label_2c844c;
        }
    }
    ctx->pc = 0x2C83CCu;
    // 0x2c83cc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C83CCu;
    {
        const bool branch_taken_0x2c83cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83CCu;
        // 0x2c83d0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83cc) {
            ctx->pc = 0x2C8484u;
            goto label_2c8484;
        }
    }
    ctx->pc = 0x2C83D4u;
    // 0x2c83d4: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C83D4u;
    {
        const bool branch_taken_0x2c83d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c83d4) {
            ctx->pc = 0x2C83D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C83D4u;
            // 0x2c83d8: 0x8ca2ffd0  lw          $v0, -0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8450u;
            goto label_2c8450;
        }
    }
    ctx->pc = 0x2C83DCu;
    // 0x2c83dc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c83dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c83e0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C83E0u;
    {
        const bool branch_taken_0x2c83e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83E0u;
        // 0x2c83e4: 0x8ca2ffd0  lw          $v0, -0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83e0) {
            ctx->pc = 0x2C841Cu;
            goto label_2c841c;
        }
    }
    ctx->pc = 0x2C83E8u;
    // 0x2c83e8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C83E8u;
    {
        const bool branch_taken_0x2c83e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c83e8) {
            ctx->pc = 0x2C83ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C83E8u;
            // 0x2c83ec: 0x262501bc  addiu       $a1, $s1, 0x1BC (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8410u;
            goto label_2c8410;
        }
    }
    ctx->pc = 0x2C83F0u;
    // 0x2c83f0: 0x8ca2ff50  lw          $v0, -0xB0($a1)
    ctx->pc = 0x2c83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967120)));
    // 0x2c83f4: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c83f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c83f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c83f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c83fc: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2c83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c8400: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c8400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8404: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2c8404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2c8408: 0xae2400dc  sw          $a0, 0xDC($s1)
    ctx->pc = 0x2c8408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 4));
    // 0x2c840c: 0x262501bc  addiu       $a1, $s1, 0x1BC
    ctx->pc = 0x2c840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
label_2c8410:
    // 0x2c8410: 0x262600e0  addiu       $a2, $s1, 0xE0
    ctx->pc = 0x2c8410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x2c8414: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8418: 0x8ca2ffd0  lw          $v0, -0x30($a1)
    ctx->pc = 0x2c8418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_2c841c:
    // 0x2c841c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C841Cu;
    {
        const bool branch_taken_0x2c841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c841c) {
            ctx->pc = 0x2C8420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C841Cu;
            // 0x2c8420: 0x24a500e0  addiu       $a1, $a1, 0xE0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8444u;
            goto label_2c8444;
        }
    }
    ctx->pc = 0x2C8424u;
    // 0x2c8424: 0x8ca2ff50  lw          $v0, -0xB0($a1)
    ctx->pc = 0x2c8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967120)));
    // 0x2c8428: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c8428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c842c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c842cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8430: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c8430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c8434: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c8434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8438: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2c8438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2c843c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2c843cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2c8440: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x2c8440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
label_2c8444:
    // 0x2c8444: 0x24c600e0  addiu       $a2, $a2, 0xE0
    ctx->pc = 0x2c8444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x2c8448: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c8448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c844c:
    // 0x2c844c: 0x8ca2ffd0  lw          $v0, -0x30($a1)
    ctx->pc = 0x2c844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_2c8450:
    // 0x2c8450: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8450u;
    {
        const bool branch_taken_0x2c8450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8450u;
        // 0x2c8454: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8450) {
            ctx->pc = 0x2C8474u;
            goto label_2c8474;
        }
    }
    ctx->pc = 0x2C8458u;
    // 0x2c8458: 0x8ca2ff50  lw          $v0, -0xB0($a1)
    ctx->pc = 0x2c8458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967120)));
    // 0x2c845c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c845cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c8460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8464: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c8464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c8468: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c8468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c846c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2c846cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2c8470: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2c8470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_2c8474:
    // 0x2c8474: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x2c8474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2c8478: 0xf0102b  sltu        $v0, $a3, $s0
    ctx->pc = 0x2c8478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c847c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C847Cu;
    {
        const bool branch_taken_0x2c847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C847Cu;
        // 0x2c8480: 0x24c600e0  addiu       $a2, $a2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c847c) {
            ctx->pc = 0x2C854Cu;
            goto label_2c854c;
        }
    }
    ctx->pc = 0x2C8484u;
label_2c8484:
    // 0x2c8484: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2c8484u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8488: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2c8488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c848c: 0x0  nop
    ctx->pc = 0x2c848cu;
    // NOP
label_2c8490:
    // 0x2c8490: 0x8d22ffd0  lw          $v0, -0x30($t1)
    ctx->pc = 0x2c8490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967248)));
    // 0x2c8494: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8494u;
    {
        const bool branch_taken_0x2c8494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8494) {
            ctx->pc = 0x2C8498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8494u;
            // 0x2c8498: 0x8d2200b0  lw          $v0, 0xB0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C84BCu;
            goto label_2c84bc;
        }
    }
    ctx->pc = 0x2C849Cu;
    // 0x2c849c: 0x8d42ff50  lw          $v0, -0xB0($t2)
    ctx->pc = 0x2c849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967120)));
    // 0x2c84a0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c84a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c84a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c84a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c84a8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c84a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c84ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c84acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c84b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2c84b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2c84b4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2c84b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2c84b8: 0x8d2200b0  lw          $v0, 0xB0($t1)
    ctx->pc = 0x2c84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 176)));
label_2c84bc:
    // 0x2c84bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C84BCu;
    {
        const bool branch_taken_0x2c84bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84BCu;
        // 0x2c84c0: 0x24c800e0  addiu       $t0, $a2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84bc) {
            ctx->pc = 0x2C84E0u;
            goto label_2c84e0;
        }
    }
    ctx->pc = 0x2C84C4u;
    // 0x2c84c4: 0x8d420030  lw          $v0, 0x30($t2)
    ctx->pc = 0x2c84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2c84c8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c84c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c84cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c84d0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c84d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c84d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c84d8: 0xaca200e0  sw          $v0, 0xE0($a1)
    ctx->pc = 0x2c84d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 2));
    // 0x2c84dc: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2c84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_2c84e0:
    // 0x2c84e0: 0x8d220190  lw          $v0, 0x190($t1)
    ctx->pc = 0x2c84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 400)));
    // 0x2c84e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C84E4u;
    {
        const bool branch_taken_0x2c84e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84E4u;
        // 0x2c84e8: 0x24c801c0  addiu       $t0, $a2, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84e4) {
            ctx->pc = 0x2C8508u;
            goto label_2c8508;
        }
    }
    ctx->pc = 0x2C84ECu;
    // 0x2c84ec: 0x8d420110  lw          $v0, 0x110($t2)
    ctx->pc = 0x2c84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 272)));
    // 0x2c84f0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c84f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c84f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c84f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c84f8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c84f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c84fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8500: 0xaca201c0  sw          $v0, 0x1C0($a1)
    ctx->pc = 0x2c8500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 448), GPR_U32(ctx, 2));
    // 0x2c8504: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2c8504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_2c8508:
    // 0x2c8508: 0x8d220270  lw          $v0, 0x270($t1)
    ctx->pc = 0x2c8508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 624)));
    // 0x2c850c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C850Cu;
    {
        const bool branch_taken_0x2c850c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C850Cu;
        // 0x2c8510: 0x24c802a0  addiu       $t0, $a2, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c850c) {
            ctx->pc = 0x2C8530u;
            goto label_2c8530;
        }
    }
    ctx->pc = 0x2C8514u;
    // 0x2c8514: 0x8d4201f0  lw          $v0, 0x1F0($t2)
    ctx->pc = 0x2c8514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 496)));
    // 0x2c8518: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c8518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c851c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c851cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8520: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c8520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c8524: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c8524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8528: 0xaca202a0  sw          $v0, 0x2A0($a1)
    ctx->pc = 0x2c8528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 672), GPR_U32(ctx, 2));
    // 0x2c852c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2c852cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_2c8530:
    // 0x2c8530: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2c8530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2c8534: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x2c8534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x2c8538: 0x254a0380  addiu       $t2, $t2, 0x380
    ctx->pc = 0x2c8538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 896));
    // 0x2c853c: 0x25290380  addiu       $t1, $t1, 0x380
    ctx->pc = 0x2c853cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 896));
    // 0x2c8540: 0xf0102b  sltu        $v0, $a3, $s0
    ctx->pc = 0x2c8540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c8544: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2C8544u;
    {
        const bool branch_taken_0x2c8544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8544u;
        // 0x2c8548: 0x24c60380  addiu       $a2, $a2, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8544) {
            ctx->pc = 0x2C8490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8490;
        }
    }
    ctx->pc = 0x2C854Cu;
label_2c854c:
    // 0x2c854c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c854cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8550:
    // 0x2c8550: 0x124000ac  beqz        $s2, . + 4 + (0xAC << 2)
    ctx->pc = 0x2C8550u;
    {
        const bool branch_taken_0x2c8550 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8550u;
        // 0x2c8554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8550) {
            ctx->pc = 0x2C8804u;
            goto label_2c8804;
        }
    }
    ctx->pc = 0x2C8558u;
    // 0x2c8558: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2c8558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c855c: 0x0  nop
    ctx->pc = 0x2c855cu;
    // NOP
label_2c8560:
    // 0x2c8560: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2c8560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c8564: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2c8564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8568: 0x10c000a1  beqz        $a2, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2C8568u;
    {
        const bool branch_taken_0x2c8568 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8568u;
        // 0x2c856c: 0x24ed0001  addiu       $t5, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8568) {
            ctx->pc = 0x2C87F0u;
            goto label_2c87f0;
        }
    }
    ctx->pc = 0x2C8570u;
    // 0x2c8570: 0x8cc700dc  lw          $a3, 0xDC($a2)
    ctx->pc = 0x2c8570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x2c8574: 0x0  nop
    ctx->pc = 0x2c8574u;
    // NOP
label_2c8578:
    // 0x2c8578: 0x50e0009b  beql        $a3, $zero, . + 4 + (0x9B << 2)
    ctx->pc = 0x2C8578u;
    {
        const bool branch_taken_0x2c8578 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8578) {
            ctx->pc = 0x2C857Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8578u;
            // 0x2c857c: 0x8cc600dc  lw          $a2, 0xDC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87E8u;
            goto label_2c87e8;
        }
    }
    ctx->pc = 0x2C8580u;
    // 0x2c8580: 0x94cc00b8  lhu         $t4, 0xB8($a2)
    ctx->pc = 0x2c8580u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x2c8584: 0x3418ffff  ori         $t8, $zero, 0xFFFF
    ctx->pc = 0x2c8584u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c8588: 0xc788820c  lwc1        $f8, -0x7DF4($gp)
    ctx->pc = 0x2c8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c858c: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2c858cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c8590: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c8590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c8594: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2c8594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2c8598: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2c8598u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c859c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2c859cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c85a0: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2c85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2c85a4: 0x0  nop
    ctx->pc = 0x2c85a4u;
    // NOP
label_2c85a8:
    // 0x2c85a8: 0x8ce4002c  lw          $a0, 0x2C($a3)
    ctx->pc = 0x2c85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2c85ac: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x2c85acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2c85b0: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x2c85b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2c85b4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2c85b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2c85b8: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x2c85b8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c85bc: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x2c85bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x2c85c0: 0x11980008  beq         $t4, $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C85C0u;
    {
        const bool branch_taken_0x2c85c0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 24));
        ctx->pc = 0x2C85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85C0u;
        // 0x2c85c4: 0x2c6a0001  sltiu       $t2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85c0) {
            ctx->pc = 0x2C85E4u;
            goto label_2c85e4;
        }
    }
    ctx->pc = 0x2C85C8u;
    // 0x2c85c8: 0x94c300b8  lhu         $v1, 0xB8($a2)
    ctx->pc = 0x2c85c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x2c85cc: 0x8cc400b4  lw          $a0, 0xB4($a2)
    ctx->pc = 0x2c85ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x2c85d0: 0x6f1818  mult        $v1, $v1, $t7
    ctx->pc = 0x2c85d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c85d4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c85d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c85dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C85DCu;
    {
        const bool branch_taken_0x2c85dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85DCu;
        // 0x2c85e0: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85dc) {
            ctx->pc = 0x2C85E8u;
            goto label_2c85e8;
        }
    }
    ctx->pc = 0x2C85E4u;
label_2c85e4:
    // 0x2c85e4: 0x8cc300b4  lw          $v1, 0xB4($a2)
    ctx->pc = 0x2c85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_2c85e8:
    // 0x2c85e8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2c85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2c85ec: 0x90c400cd  lbu         $a0, 0xCD($a2)
    ctx->pc = 0x2c85ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 205)));
    // 0x2c85f0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2c85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c85f4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2c85f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c85f8: 0x90e500cd  lbu         $a1, 0xCD($a3)
    ctx->pc = 0x2c85f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 205)));
    // 0x2c85fc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2c85fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2c8600: 0x148b0039  bne         $a0, $t3, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C8600u;
    {
        const bool branch_taken_0x2c8600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x2C8604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8600u;
        // 0x2c8604: 0x1c3400b  movn        $t0, $t6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8600) {
            ctx->pc = 0x2C86E8u;
            goto label_2c86e8;
        }
    }
    ctx->pc = 0x2C8608u;
    // 0x2c8608: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x2c8608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c860c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C860Cu;
    {
        const bool branch_taken_0x2c860c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c860c) {
            ctx->pc = 0x2C8610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C860Cu;
            // 0x2c8610: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C86ECu;
            goto label_2c86ec;
        }
    }
    ctx->pc = 0x2C8614u;
    // 0x2c8614: 0x51000071  beql        $t0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x2C8614u;
    {
        const bool branch_taken_0x2c8614 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8614) {
            ctx->pc = 0x2C8618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8614u;
            // 0x2c8618: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C861Cu;
    // 0x2c861c: 0x5140006f  beql        $t2, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C861Cu;
    {
        const bool branch_taken_0x2c861c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c861c) {
            ctx->pc = 0x2C8620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C861Cu;
            // 0x2c8620: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C8624u;
    // 0x2c8624: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2c8624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8628: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x2c8628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c862c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c862cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8630: 0x0  nop
    ctx->pc = 0x2c8630u;
    // NOP
    // 0x2c8634: 0x45020069  bc1fl       . + 4 + (0x69 << 2)
    ctx->pc = 0x2C8634u;
    {
        const bool branch_taken_0x2c8634 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8634) {
            ctx->pc = 0x2C8638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8634u;
            // 0x2c8638: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C863Cu;
    // 0x2c863c: 0x8ce200ac  lw          $v0, 0xAC($a3)
    ctx->pc = 0x2c863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
    // 0x2c8640: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8640u;
    {
        const bool branch_taken_0x2c8640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8640) {
            ctx->pc = 0x2C8644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8640u;
            // 0x2c8644: 0xc4e0000c  lwc1        $f0, 0xC($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8650u;
            goto label_2c8650;
        }
    }
    ctx->pc = 0x2C8648u;
    // 0x2c8648: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C8648u;
    {
        const bool branch_taken_0x2c8648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8648u;
        // 0x2c864c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8648) {
            ctx->pc = 0x2C86D8u;
            goto label_2c86d8;
        }
    }
    ctx->pc = 0x2C8650u;
label_2c8650:
    // 0x2c8650: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x2c8650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8654: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c8654u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c8658: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2c8658u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c865c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x2c865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8660: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x2c8660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c8664: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2c8664u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c8668: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x2c8668u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c866c: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x2c866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c8670: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x2c8670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8674: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2c8674u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2c8678: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x2c8678u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c867c: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2c867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8680: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c8680u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c8684: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x2c8684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8688: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c8688u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c868c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2c868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8690: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x2c8690u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x2c8694: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2c8694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c8698: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2c8698u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2c869c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c869cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c86a0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2c86a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c86a4: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2c86a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2c86a8: 0x4608a0c2  mul.s       $f3, $f20, $f8
    ctx->pc = 0x2c86a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[8]);
    // 0x2c86ac: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2c86acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2c86b0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2c86b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2c86b4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2c86b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2c86b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c86b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c86bc: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c86bcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c86c0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2c86c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c86c4: 0x0  nop
    ctx->pc = 0x2c86c4u;
    // NOP
    // 0x2c86c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C86C8u;
    {
        const bool branch_taken_0x2c86c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86C8u;
        // 0x2c86cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86c8) {
            ctx->pc = 0x2C86D8u;
            goto label_2c86d8;
        }
    }
    ctx->pc = 0x2C86D0u;
    // 0x2c86d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c86d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c86d4: 0x0  nop
    ctx->pc = 0x2c86d4u;
    // NOP
label_2c86d8:
    // 0x2c86d8: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C86D8u;
    {
        const bool branch_taken_0x2c86d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c86d8) {
            ctx->pc = 0x2C86DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C86D8u;
            // 0x2c86dc: 0xace000ac  sw          $zero, 0xAC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87D8u;
            goto label_2c87d8;
        }
    }
    ctx->pc = 0x2C86E0u;
    // 0x2c86e0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2C86E0u;
    {
        const bool branch_taken_0x2c86e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86E0u;
        // 0x2c86e4: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86e0) {
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C86E8u;
label_2c86e8:
    // 0x2c86e8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c86e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2c86ec:
    // 0x2c86ec: 0x544b003b  bnel        $v0, $t3, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C86ECu;
    {
        const bool branch_taken_0x2c86ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x2c86ec) {
            ctx->pc = 0x2C86F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C86ECu;
            // 0x2c86f0: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C86F4u;
    // 0x2c86f4: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x2c86f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2c86f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2c86f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c86fc: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C86FCu;
    {
        const bool branch_taken_0x2c86fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c86fc) {
            ctx->pc = 0x2C8700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C86FCu;
            // 0x2c8700: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C8704u;
    // 0x2c8704: 0x51000035  beql        $t0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C8704u;
    {
        const bool branch_taken_0x2c8704 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8704) {
            ctx->pc = 0x2C8708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8704u;
            // 0x2c8708: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C870Cu;
    // 0x2c870c: 0x51400033  beql        $t2, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C870Cu;
    {
        const bool branch_taken_0x2c870c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c870c) {
            ctx->pc = 0x2C8710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C870Cu;
            // 0x2c8710: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C8714u;
    // 0x2c8714: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2c8714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8718: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x2c8718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c871c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c871cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8720: 0x0  nop
    ctx->pc = 0x2c8720u;
    // NOP
    // 0x2c8724: 0x4502002d  bc1fl       . + 4 + (0x2D << 2)
    ctx->pc = 0x2C8724u;
    {
        const bool branch_taken_0x2c8724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8724) {
            ctx->pc = 0x2C8728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8724u;
            // 0x2c8728: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C872Cu;
    // 0x2c872c: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x2c872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
    // 0x2c8730: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8730u;
    {
        const bool branch_taken_0x2c8730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8730) {
            ctx->pc = 0x2C8734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8730u;
            // 0x2c8734: 0xc4c0000c  lwc1        $f0, 0xC($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8740u;
            goto label_2c8740;
        }
    }
    ctx->pc = 0x2C8738u;
    // 0x2c8738: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C8738u;
    {
        const bool branch_taken_0x2c8738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8738u;
        // 0x2c873c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8738) {
            ctx->pc = 0x2C87C8u;
            goto label_2c87c8;
        }
    }
    ctx->pc = 0x2C8740u;
label_2c8740:
    // 0x2c8740: 0xc4e3000c  lwc1        $f3, 0xC($a3)
    ctx->pc = 0x2c8740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8744: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c8744u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c8748: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2c8748u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c874c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2c874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8750: 0xc4e60010  lwc1        $f6, 0x10($a3)
    ctx->pc = 0x2c8750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c8754: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2c8754u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c8758: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x2c8758u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c875c: 0xc4e50014  lwc1        $f5, 0x14($a3)
    ctx->pc = 0x2c875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c8760: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2c8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8764: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2c8764u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2c8768: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x2c8768u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c876c: 0xc4e20018  lwc1        $f2, 0x18($a3)
    ctx->pc = 0x2c876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8770: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c8770u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c8774: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2c8774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8778: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c8778u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c877c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2c877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8780: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x2c8780u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x2c8784: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x2c8784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c8788: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2c8788u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2c878c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c878cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c8790: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2c8790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8794: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2c8794u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2c8798: 0x4608a0c2  mul.s       $f3, $f20, $f8
    ctx->pc = 0x2c8798u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[8]);
    // 0x2c879c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2c879cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2c87a0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2c87a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2c87a4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2c87a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2c87a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c87a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c87ac: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c87acu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c87b0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2c87b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c87b4: 0x0  nop
    ctx->pc = 0x2c87b4u;
    // NOP
    // 0x2c87b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C87B8u;
    {
        const bool branch_taken_0x2c87b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87B8u;
        // 0x2c87bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87b8) {
            ctx->pc = 0x2C87C8u;
            goto label_2c87c8;
        }
    }
    ctx->pc = 0x2C87C0u;
    // 0x2c87c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c87c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c87c4: 0x0  nop
    ctx->pc = 0x2c87c4u;
    // NOP
label_2c87c8:
    // 0x2c87c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C87C8u;
    {
        const bool branch_taken_0x2c87c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c87c8) {
            ctx->pc = 0x2C87CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C87C8u;
            // 0x2c87cc: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C87D0u;
    // 0x2c87d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C87D0u;
    {
        const bool branch_taken_0x2c87d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87D0u;
        // 0x2c87d4: 0xacc000ac  sw          $zero, 0xAC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87d0) {
            ctx->pc = 0x2C87E4u;
            goto label_2c87e4;
        }
    }
    ctx->pc = 0x2C87D8u;
label_2c87d8:
    // 0x2c87d8: 0x8ce700dc  lw          $a3, 0xDC($a3)
    ctx->pc = 0x2c87d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
label_2c87dc:
    // 0x2c87dc: 0x54e0ff72  bnel        $a3, $zero, . + 4 + (-0x8E << 2)
    ctx->pc = 0x2C87DCu;
    {
        const bool branch_taken_0x2c87dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c87dc) {
            ctx->pc = 0x2C87E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C87DCu;
            // 0x2c87e0: 0x8cc2002c  lw          $v0, 0x2C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C85A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c85a8;
        }
    }
    ctx->pc = 0x2C87E4u;
label_2c87e4:
    // 0x2c87e4: 0x8cc600dc  lw          $a2, 0xDC($a2)
    ctx->pc = 0x2c87e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
label_2c87e8:
    // 0x2c87e8: 0x54c0ff63  bnel        $a2, $zero, . + 4 + (-0x9D << 2)
    ctx->pc = 0x2C87E8u;
    {
        const bool branch_taken_0x2c87e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c87e8) {
            ctx->pc = 0x2C87ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C87E8u;
            // 0x2c87ec: 0x8cc700dc  lw          $a3, 0xDC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8578;
        }
    }
    ctx->pc = 0x2C87F0u;
label_2c87f0:
    // 0x2c87f0: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x2c87f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c87f4: 0xf2102b  sltu        $v0, $a3, $s2
    ctx->pc = 0x2c87f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c87f8: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x2C87F8u;
    {
        const bool branch_taken_0x2c87f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87F8u;
        // 0x2c87fc: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87f8) {
            ctx->pc = 0x2C8560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8560;
        }
    }
    ctx->pc = 0x2C8800u;
    // 0x2c8800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8804:
    // 0x2c8804: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C8804u;
    {
        const bool branch_taken_0x2c8804 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8804u;
        // 0x2c8808: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8804) {
            ctx->pc = 0x2C8848u;
            goto label_2c8848;
        }
    }
    ctx->pc = 0x2C880Cu;
    // 0x2c880c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8810: 0x50400077  beql        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x2C8810u;
    {
        const bool branch_taken_0x2c8810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8810) {
            ctx->pc = 0x2C8814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8810u;
            // 0x2c8814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C89F0u;
            goto label_2c89f0;
        }
    }
    ctx->pc = 0x2C8818u;
    // 0x2c8818: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c8818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c881c: 0x0  nop
    ctx->pc = 0x2c881cu;
    // NOP
label_2c8820:
    // 0x2c8820: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2c8820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x2c8824: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8824u;
    {
        const bool branch_taken_0x2c8824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8824) {
            ctx->pc = 0x2C8828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8824u;
            // 0x2c8828: 0x246400dc  addiu       $a0, $v1, 0xDC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8834u;
            goto label_2c8834;
        }
    }
    ctx->pc = 0x2C882Cu;
    // 0x2c882c: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x2c882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x2c8830: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c8830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c8834:
    // 0x2c8834: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c8834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8838: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C8838u;
    {
        const bool branch_taken_0x2c8838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8838) {
            ctx->pc = 0x2C883Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8838u;
            // 0x2c883c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8820;
        }
    }
    ctx->pc = 0x2C8840u;
    // 0x2c8840: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2C8840u;
    {
        const bool branch_taken_0x2c8840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8840u;
        // 0x2c8844: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8840) {
            ctx->pc = 0x2C89F0u;
            goto label_2c89f0;
        }
    }
    ctx->pc = 0x2C8848u;
label_2c8848:
    // 0x2c8848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c884c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2C884Cu;
    SET_GPR_U32(ctx, 31, 0x2C8854u);
    ctx->pc = 0x2C8850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C884Cu;
    // 0x2c8850: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2C884Cu, 0x2C8854u)) {
        return;
    }
    ctx->pc = 0x2C8854u;
label_2c8854:
    // 0x2c8854: 0x12000065  beqz        $s0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2C8854u;
    {
        const bool branch_taken_0x2c8854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8854u;
        // 0x2c8858: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8854) {
            ctx->pc = 0x2C89ECu;
            goto label_2c89ec;
        }
    }
    ctx->pc = 0x2C885Cu;
    // 0x2c885c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c885cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8860: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x2c8860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x2c8864: 0x1a000021  blez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C8864u;
    {
        const bool branch_taken_0x2c8864 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2C8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8864u;
        // 0x2c8868: 0x24c500dc  addiu       $a1, $a2, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8864) {
            ctx->pc = 0x2C88ECu;
            goto label_2c88ec;
        }
    }
    ctx->pc = 0x2C886Cu;
    // 0x2c886c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C886Cu;
    {
        const bool branch_taken_0x2c886c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C886Cu;
        // 0x2c8870: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c886c) {
            ctx->pc = 0x2C8924u;
            goto label_2c8924;
        }
    }
    ctx->pc = 0x2C8874u;
    // 0x2c8874: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C8874u;
    {
        const bool branch_taken_0x2c8874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8874) {
            ctx->pc = 0x2C8878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8874u;
            // 0x2c8878: 0x8ca2ffd0  lw          $v0, -0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C88F0u;
            goto label_2c88f0;
        }
    }
    ctx->pc = 0x2C887Cu;
    // 0x2c887c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c887cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c8880: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C8880u;
    {
        const bool branch_taken_0x2c8880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8880u;
        // 0x2c8884: 0x8ca2ffd0  lw          $v0, -0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8880) {
            ctx->pc = 0x2C88BCu;
            goto label_2c88bc;
        }
    }
    ctx->pc = 0x2C8888u;
    // 0x2c8888: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8888u;
    {
        const bool branch_taken_0x2c8888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8888) {
            ctx->pc = 0x2C888Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8888u;
            // 0x2c888c: 0x24c501bc  addiu       $a1, $a2, 0x1BC (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C88B0u;
            goto label_2c88b0;
        }
    }
    ctx->pc = 0x2C8890u;
    // 0x2c8890: 0x8ca2ff54  lw          $v0, -0xAC($a1)
    ctx->pc = 0x2c8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967124)));
    // 0x2c8894: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c8894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c8898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c889c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2c889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c88a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c88a4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2c88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2c88a8: 0xacc400dc  sw          $a0, 0xDC($a2)
    ctx->pc = 0x2c88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 4));
    // 0x2c88ac: 0x24c501bc  addiu       $a1, $a2, 0x1BC
    ctx->pc = 0x2c88acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
label_2c88b0:
    // 0x2c88b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c88b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c88b4: 0x24c600e0  addiu       $a2, $a2, 0xE0
    ctx->pc = 0x2c88b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x2c88b8: 0x8ca2ffd0  lw          $v0, -0x30($a1)
    ctx->pc = 0x2c88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_2c88bc:
    // 0x2c88bc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C88BCu;
    {
        const bool branch_taken_0x2c88bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88bc) {
            ctx->pc = 0x2C88C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C88BCu;
            // 0x2c88c0: 0x24a500e0  addiu       $a1, $a1, 0xE0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C88E4u;
            goto label_2c88e4;
        }
    }
    ctx->pc = 0x2C88C4u;
    // 0x2c88c4: 0x8ca2ff54  lw          $v0, -0xAC($a1)
    ctx->pc = 0x2c88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967124)));
    // 0x2c88c8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c88c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c88cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c88d0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c88d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c88d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c88d8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2c88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2c88dc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2c88dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2c88e0: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x2c88e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
label_2c88e4:
    // 0x2c88e4: 0x24c600e0  addiu       $a2, $a2, 0xE0
    ctx->pc = 0x2c88e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x2c88e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c88e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c88ec:
    // 0x2c88ec: 0x8ca2ffd0  lw          $v0, -0x30($a1)
    ctx->pc = 0x2c88ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_2c88f0:
    // 0x2c88f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C88F0u;
    {
        const bool branch_taken_0x2c88f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C88F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88F0u;
        // 0x2c88f4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88f0) {
            ctx->pc = 0x2C8914u;
            goto label_2c8914;
        }
    }
    ctx->pc = 0x2C88F8u;
    // 0x2c88f8: 0x8ca2ff54  lw          $v0, -0xAC($a1)
    ctx->pc = 0x2c88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967124)));
    // 0x2c88fc: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c88fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c8900: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8904: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c8904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c8908: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c8908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c890c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2c890cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2c8910: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2c8910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_2c8914:
    // 0x2c8914: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x2c8914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2c8918: 0xf0102b  sltu        $v0, $a3, $s0
    ctx->pc = 0x2c8918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c891c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C891Cu;
    {
        const bool branch_taken_0x2c891c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C891Cu;
        // 0x2c8920: 0x24c600e0  addiu       $a2, $a2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c891c) {
            ctx->pc = 0x2C89ECu;
            goto label_2c89ec;
        }
    }
    ctx->pc = 0x2C8924u;
label_2c8924:
    // 0x2c8924: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2c8924u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8928: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2c8928u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c892c: 0x0  nop
    ctx->pc = 0x2c892cu;
    // NOP
label_2c8930:
    // 0x2c8930: 0x8d22ffd0  lw          $v0, -0x30($t1)
    ctx->pc = 0x2c8930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967248)));
    // 0x2c8934: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8934u;
    {
        const bool branch_taken_0x2c8934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8934) {
            ctx->pc = 0x2C8938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8934u;
            // 0x2c8938: 0x8d2200b0  lw          $v0, 0xB0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C895Cu;
            goto label_2c895c;
        }
    }
    ctx->pc = 0x2C893Cu;
    // 0x2c893c: 0x8d42ff54  lw          $v0, -0xAC($t2)
    ctx->pc = 0x2c893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967124)));
    // 0x2c8940: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c8940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c8944: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8948: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c8948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c894c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c894cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8950: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2c8950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2c8954: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2c8954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2c8958: 0x8d2200b0  lw          $v0, 0xB0($t1)
    ctx->pc = 0x2c8958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 176)));
label_2c895c:
    // 0x2c895c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C895Cu;
    {
        const bool branch_taken_0x2c895c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C895Cu;
        // 0x2c8960: 0x24c800e0  addiu       $t0, $a2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c895c) {
            ctx->pc = 0x2C8980u;
            goto label_2c8980;
        }
    }
    ctx->pc = 0x2C8964u;
    // 0x2c8964: 0x8d420034  lw          $v0, 0x34($t2)
    ctx->pc = 0x2c8964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 52)));
    // 0x2c8968: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c8968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c896c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c896cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8970: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c8970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c8974: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c8974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8978: 0xaca200e0  sw          $v0, 0xE0($a1)
    ctx->pc = 0x2c8978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 2));
    // 0x2c897c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2c897cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_2c8980:
    // 0x2c8980: 0x8d220190  lw          $v0, 0x190($t1)
    ctx->pc = 0x2c8980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 400)));
    // 0x2c8984: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8984u;
    {
        const bool branch_taken_0x2c8984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8984u;
        // 0x2c8988: 0x24c801c0  addiu       $t0, $a2, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8984) {
            ctx->pc = 0x2C89A8u;
            goto label_2c89a8;
        }
    }
    ctx->pc = 0x2C898Cu;
    // 0x2c898c: 0x8d420114  lw          $v0, 0x114($t2)
    ctx->pc = 0x2c898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 276)));
    // 0x2c8990: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c8990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c8994: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8998: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c8998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c899c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c89a0: 0xaca201c0  sw          $v0, 0x1C0($a1)
    ctx->pc = 0x2c89a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 448), GPR_U32(ctx, 2));
    // 0x2c89a4: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2c89a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_2c89a8:
    // 0x2c89a8: 0x8d220270  lw          $v0, 0x270($t1)
    ctx->pc = 0x2c89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 624)));
    // 0x2c89ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C89ACu;
    {
        const bool branch_taken_0x2c89ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89ACu;
        // 0x2c89b0: 0x24c802a0  addiu       $t0, $a2, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89ac) {
            ctx->pc = 0x2C89D0u;
            goto label_2c89d0;
        }
    }
    ctx->pc = 0x2C89B4u;
    // 0x2c89b4: 0x8d4201f4  lw          $v0, 0x1F4($t2)
    ctx->pc = 0x2c89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 500)));
    // 0x2c89b8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c89b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c89bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c89c0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c89c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c89c8: 0xaca202a0  sw          $v0, 0x2A0($a1)
    ctx->pc = 0x2c89c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 672), GPR_U32(ctx, 2));
    // 0x2c89cc: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2c89ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_2c89d0:
    // 0x2c89d0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2c89d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2c89d4: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x2c89d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x2c89d8: 0x254a0380  addiu       $t2, $t2, 0x380
    ctx->pc = 0x2c89d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 896));
    // 0x2c89dc: 0x25290380  addiu       $t1, $t1, 0x380
    ctx->pc = 0x2c89dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 896));
    // 0x2c89e0: 0xf0102b  sltu        $v0, $a3, $s0
    ctx->pc = 0x2c89e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c89e4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2C89E4u;
    {
        const bool branch_taken_0x2c89e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89E4u;
        // 0x2c89e8: 0x24c60380  addiu       $a2, $a2, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89e4) {
            ctx->pc = 0x2C8930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8930;
        }
    }
    ctx->pc = 0x2C89ECu;
label_2c89ec:
    // 0x2c89ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c89ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c89f0:
    // 0x2c89f0: 0x524000ac  beql        $s2, $zero, . + 4 + (0xAC << 2)
    ctx->pc = 0x2C89F0u;
    {
        const bool branch_taken_0x2c89f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c89f0) {
            ctx->pc = 0x2C89F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C89F0u;
            // 0x2c89f4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8CA4u;
            goto label_2c8ca4;
        }
    }
    ctx->pc = 0x2C89F8u;
    // 0x2c89f8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2c89f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c89fc: 0x0  nop
    ctx->pc = 0x2c89fcu;
    // NOP
label_2c8a00:
    // 0x2c8a00: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2c8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c8a04: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2c8a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8a08: 0x10c000a1  beqz        $a2, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2C8A08u;
    {
        const bool branch_taken_0x2c8a08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A08u;
        // 0x2c8a0c: 0x24ed0001  addiu       $t5, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a08) {
            ctx->pc = 0x2C8C90u;
            goto label_2c8c90;
        }
    }
    ctx->pc = 0x2C8A10u;
    // 0x2c8a10: 0x8cc700dc  lw          $a3, 0xDC($a2)
    ctx->pc = 0x2c8a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x2c8a14: 0x0  nop
    ctx->pc = 0x2c8a14u;
    // NOP
label_2c8a18:
    // 0x2c8a18: 0x50e0009b  beql        $a3, $zero, . + 4 + (0x9B << 2)
    ctx->pc = 0x2C8A18u;
    {
        const bool branch_taken_0x2c8a18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a18) {
            ctx->pc = 0x2C8A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A18u;
            // 0x2c8a1c: 0x8cc600dc  lw          $a2, 0xDC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C88u;
            goto label_2c8c88;
        }
    }
    ctx->pc = 0x2C8A20u;
    // 0x2c8a20: 0x94cc00b8  lhu         $t4, 0xB8($a2)
    ctx->pc = 0x2c8a20u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x2c8a24: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x2c8a24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c8a28: 0xc7888210  lwc1        $f8, -0x7DF0($gp)
    ctx->pc = 0x2c8a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c8a2c: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2c8a2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c8a30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c8a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c8a34: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2c8a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2c8a38: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2c8a38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8a3c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2c8a3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8a40: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2c8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2c8a44: 0x0  nop
    ctx->pc = 0x2c8a44u;
    // NOP
label_2c8a48:
    // 0x2c8a48: 0x8ce4002c  lw          $a0, 0x2C($a3)
    ctx->pc = 0x2c8a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2c8a4c: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x2c8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2c8a50: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x2c8a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2c8a54: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2c8a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2c8a58: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x2c8a58u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c8a5c: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x2c8a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x2c8a60: 0x11900008  beq         $t4, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8A60u;
    {
        const bool branch_taken_0x2c8a60 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A60u;
        // 0x2c8a64: 0x2c6a0001  sltiu       $t2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a60) {
            ctx->pc = 0x2C8A84u;
            goto label_2c8a84;
        }
    }
    ctx->pc = 0x2C8A68u;
    // 0x2c8a68: 0x94c300b8  lhu         $v1, 0xB8($a2)
    ctx->pc = 0x2c8a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x2c8a6c: 0x8cc400b4  lw          $a0, 0xB4($a2)
    ctx->pc = 0x2c8a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x2c8a70: 0x6f1818  mult        $v1, $v1, $t7
    ctx->pc = 0x2c8a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c8a74: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c8a78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8a7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8A7Cu;
    {
        const bool branch_taken_0x2c8a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A7Cu;
        // 0x2c8a80: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a7c) {
            ctx->pc = 0x2C8A88u;
            goto label_2c8a88;
        }
    }
    ctx->pc = 0x2C8A84u;
label_2c8a84:
    // 0x2c8a84: 0x8cc300b4  lw          $v1, 0xB4($a2)
    ctx->pc = 0x2c8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_2c8a88:
    // 0x2c8a88: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2c8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2c8a8c: 0x90c400cc  lbu         $a0, 0xCC($a2)
    ctx->pc = 0x2c8a8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x2c8a90: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2c8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c8a94: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2c8a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a98: 0x90e500cc  lbu         $a1, 0xCC($a3)
    ctx->pc = 0x2c8a98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2c8a9c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2c8a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2c8aa0: 0x148b0039  bne         $a0, $t3, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C8AA0u;
    {
        const bool branch_taken_0x2c8aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x2C8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AA0u;
        // 0x2c8aa4: 0x1c3400b  movn        $t0, $t6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8aa0) {
            ctx->pc = 0x2C8B88u;
            goto label_2c8b88;
        }
    }
    ctx->pc = 0x2C8AA8u;
    // 0x2c8aa8: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x2c8aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8aac: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C8AACu;
    {
        const bool branch_taken_0x2c8aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8aac) {
            ctx->pc = 0x2C8AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AACu;
            // 0x2c8ab0: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8B8Cu;
            goto label_2c8b8c;
        }
    }
    ctx->pc = 0x2C8AB4u;
    // 0x2c8ab4: 0x51000071  beql        $t0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x2C8AB4u;
    {
        const bool branch_taken_0x2c8ab4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ab4) {
            ctx->pc = 0x2C8AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AB4u;
            // 0x2c8ab8: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C7Cu;
            goto label_2c8c7c;
        }
    }
    ctx->pc = 0x2C8ABCu;
    // 0x2c8abc: 0x5140006f  beql        $t2, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C8ABCu;
    {
        const bool branch_taken_0x2c8abc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8abc) {
            ctx->pc = 0x2C8AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8ABCu;
            // 0x2c8ac0: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C7Cu;
            goto label_2c8c7c;
        }
    }
    ctx->pc = 0x2C8AC4u;
    // 0x2c8ac4: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2c8ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8ac8: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x2c8ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8acc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c8accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8ad0: 0x0  nop
    ctx->pc = 0x2c8ad0u;
    // NOP
    // 0x2c8ad4: 0x45020069  bc1fl       . + 4 + (0x69 << 2)
    ctx->pc = 0x2C8AD4u;
    {
        const bool branch_taken_0x2c8ad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8ad4) {
            ctx->pc = 0x2C8AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AD4u;
            // 0x2c8ad8: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C7Cu;
            goto label_2c8c7c;
        }
    }
    ctx->pc = 0x2C8ADCu;
    // 0x2c8adc: 0x8ce200ac  lw          $v0, 0xAC($a3)
    ctx->pc = 0x2c8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
    // 0x2c8ae0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8AE0u;
    {
        const bool branch_taken_0x2c8ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ae0) {
            ctx->pc = 0x2C8AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AE0u;
            // 0x2c8ae4: 0xc4e0000c  lwc1        $f0, 0xC($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8AF0u;
            goto label_2c8af0;
        }
    }
    ctx->pc = 0x2C8AE8u;
    // 0x2c8ae8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C8AE8u;
    {
        const bool branch_taken_0x2c8ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AE8u;
        // 0x2c8aec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ae8) {
            ctx->pc = 0x2C8B78u;
            goto label_2c8b78;
        }
    }
    ctx->pc = 0x2C8AF0u;
label_2c8af0:
    // 0x2c8af0: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x2c8af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8af4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c8af4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c8af8: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2c8af8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c8afc: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x2c8afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8b00: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x2c8b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c8b04: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2c8b04u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c8b08: 0xe7a60064  swc1        $f6, 0x64($sp)
    ctx->pc = 0x2c8b08u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2c8b0c: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x2c8b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c8b10: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x2c8b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8b14: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2c8b14u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2c8b18: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x2c8b18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c8b1c: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2c8b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8b20: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c8b20u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c8b24: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x2c8b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8b28: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c8b28u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c8b2c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2c8b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8b30: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x2c8b30u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x2c8b34: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2c8b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c8b38: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2c8b38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2c8b3c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c8b3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c8b40: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2c8b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8b44: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2c8b44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2c8b48: 0x4608a0c2  mul.s       $f3, $f20, $f8
    ctx->pc = 0x2c8b48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[8]);
    // 0x2c8b4c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2c8b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2c8b50: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2c8b50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2c8b54: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2c8b54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2c8b58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c8b58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8b5c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c8b5cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c8b60: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2c8b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8b64: 0x0  nop
    ctx->pc = 0x2c8b64u;
    // NOP
    // 0x2c8b68: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8B68u;
    {
        const bool branch_taken_0x2c8b68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B68u;
        // 0x2c8b6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b68) {
            ctx->pc = 0x2C8B78u;
            goto label_2c8b78;
        }
    }
    ctx->pc = 0x2C8B70u;
    // 0x2c8b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b74: 0x0  nop
    ctx->pc = 0x2c8b74u;
    // NOP
label_2c8b78:
    // 0x2c8b78: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C8B78u;
    {
        const bool branch_taken_0x2c8b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b78) {
            ctx->pc = 0x2C8B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B78u;
            // 0x2c8b7c: 0xace000ac  sw          $zero, 0xAC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C78u;
            goto label_2c8c78;
        }
    }
    ctx->pc = 0x2C8B80u;
    // 0x2c8b80: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2C8B80u;
    {
        const bool branch_taken_0x2c8b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B80u;
        // 0x2c8b84: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b80) {
            ctx->pc = 0x2C8C7Cu;
            goto label_2c8c7c;
        }
    }
    ctx->pc = 0x2C8B88u;
label_2c8b88:
    // 0x2c8b88: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c8b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2c8b8c:
    // 0x2c8b8c: 0x544b003b  bnel        $v0, $t3, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C8B8Cu;
    {
        const bool branch_taken_0x2c8b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x2c8b8c) {
            ctx->pc = 0x2C8B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B8Cu;
            // 0x2c8b90: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C7Cu;
            goto label_2c8c7c;
        }
    }
    ctx->pc = 0x2C8B94u;
    // 0x2c8b94: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x2c8b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2c8b98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2c8b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8b9c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C8B9Cu;
    {
        const bool branch_taken_0x2c8b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b9c) {
            ctx->pc = 0x2C8BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B9Cu;
            // 0x2c8ba0: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C7Cu;
            goto label_2c8c7c;
        }
    }
    ctx->pc = 0x2C8BA4u;
    // 0x2c8ba4: 0x51000035  beql        $t0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C8BA4u;
    {
        const bool branch_taken_0x2c8ba4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ba4) {
            ctx->pc = 0x2C8BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BA4u;
            // 0x2c8ba8: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C7Cu;
            goto label_2c8c7c;
        }
    }
    ctx->pc = 0x2C8BACu;
    // 0x2c8bac: 0x51400033  beql        $t2, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C8BACu;
    {
        const bool branch_taken_0x2c8bac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8bac) {
            ctx->pc = 0x2C8BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BACu;
            // 0x2c8bb0: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C7Cu;
            goto label_2c8c7c;
        }
    }
    ctx->pc = 0x2C8BB4u;
    // 0x2c8bb4: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2c8bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8bb8: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x2c8bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8bbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c8bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8bc0: 0x0  nop
    ctx->pc = 0x2c8bc0u;
    // NOP
    // 0x2c8bc4: 0x4502002d  bc1fl       . + 4 + (0x2D << 2)
    ctx->pc = 0x2C8BC4u;
    {
        const bool branch_taken_0x2c8bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8bc4) {
            ctx->pc = 0x2C8BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BC4u;
            // 0x2c8bc8: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C7Cu;
            goto label_2c8c7c;
        }
    }
    ctx->pc = 0x2C8BCCu;
    // 0x2c8bcc: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x2c8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
    // 0x2c8bd0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8BD0u;
    {
        const bool branch_taken_0x2c8bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8bd0) {
            ctx->pc = 0x2C8BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BD0u;
            // 0x2c8bd4: 0xc4c0000c  lwc1        $f0, 0xC($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8BE0u;
            goto label_2c8be0;
        }
    }
    ctx->pc = 0x2C8BD8u;
    // 0x2c8bd8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C8BD8u;
    {
        const bool branch_taken_0x2c8bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BD8u;
        // 0x2c8bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bd8) {
            ctx->pc = 0x2C8C68u;
            goto label_2c8c68;
        }
    }
    ctx->pc = 0x2C8BE0u;
label_2c8be0:
    // 0x2c8be0: 0xc4e3000c  lwc1        $f3, 0xC($a3)
    ctx->pc = 0x2c8be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8be4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c8be4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c8be8: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x2c8be8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2c8bec: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2c8becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8bf0: 0xc4e60010  lwc1        $f6, 0x10($a3)
    ctx->pc = 0x2c8bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c8bf4: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2c8bf4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2c8bf8: 0xe7a60074  swc1        $f6, 0x74($sp)
    ctx->pc = 0x2c8bf8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2c8bfc: 0xc4e50014  lwc1        $f5, 0x14($a3)
    ctx->pc = 0x2c8bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c8c00: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2c8c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8c04: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2c8c04u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2c8c08: 0xe7a50078  swc1        $f5, 0x78($sp)
    ctx->pc = 0x2c8c08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2c8c0c: 0xc4e20018  lwc1        $f2, 0x18($a3)
    ctx->pc = 0x2c8c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8c10: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c8c10u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c8c14: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2c8c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8c18: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c8c18u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c8c1c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2c8c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8c20: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x2c8c20u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x2c8c24: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x2c8c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c8c28: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2c8c28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2c8c2c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c8c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c8c30: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2c8c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8c34: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2c8c34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2c8c38: 0x4608a0c2  mul.s       $f3, $f20, $f8
    ctx->pc = 0x2c8c38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[8]);
    // 0x2c8c3c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2c8c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2c8c40: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2c8c40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2c8c44: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2c8c44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2c8c48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c8c48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8c4c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c8c4cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c8c50: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2c8c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8c54: 0x0  nop
    ctx->pc = 0x2c8c54u;
    // NOP
    // 0x2c8c58: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8C58u;
    {
        const bool branch_taken_0x2c8c58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C58u;
        // 0x2c8c5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c58) {
            ctx->pc = 0x2C8C68u;
            goto label_2c8c68;
        }
    }
    ctx->pc = 0x2C8C60u;
    // 0x2c8c60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c64: 0x0  nop
    ctx->pc = 0x2c8c64u;
    // NOP
label_2c8c68:
    // 0x2c8c68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8C68u;
    {
        const bool branch_taken_0x2c8c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c68) {
            ctx->pc = 0x2C8C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C68u;
            // 0x2c8c6c: 0x8ce700dc  lw          $a3, 0xDC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C7Cu;
            goto label_2c8c7c;
        }
    }
    ctx->pc = 0x2C8C70u;
    // 0x2c8c70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8C70u;
    {
        const bool branch_taken_0x2c8c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C70u;
        // 0x2c8c74: 0xacc000ac  sw          $zero, 0xAC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c70) {
            ctx->pc = 0x2C8C84u;
            goto label_2c8c84;
        }
    }
    ctx->pc = 0x2C8C78u;
label_2c8c78:
    // 0x2c8c78: 0x8ce700dc  lw          $a3, 0xDC($a3)
    ctx->pc = 0x2c8c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
label_2c8c7c:
    // 0x2c8c7c: 0x54e0ff72  bnel        $a3, $zero, . + 4 + (-0x8E << 2)
    ctx->pc = 0x2C8C7Cu;
    {
        const bool branch_taken_0x2c8c7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c7c) {
            ctx->pc = 0x2C8C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C7Cu;
            // 0x2c8c80: 0x8cc2002c  lw          $v0, 0x2C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8a48;
        }
    }
    ctx->pc = 0x2C8C84u;
label_2c8c84:
    // 0x2c8c84: 0x8cc600dc  lw          $a2, 0xDC($a2)
    ctx->pc = 0x2c8c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
label_2c8c88:
    // 0x2c8c88: 0x54c0ff63  bnel        $a2, $zero, . + 4 + (-0x9D << 2)
    ctx->pc = 0x2C8C88u;
    {
        const bool branch_taken_0x2c8c88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c88) {
            ctx->pc = 0x2C8C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C88u;
            // 0x2c8c8c: 0x8cc700dc  lw          $a3, 0xDC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8a18;
        }
    }
    ctx->pc = 0x2C8C90u;
label_2c8c90:
    // 0x2c8c90: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x2c8c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c94: 0xf2102b  sltu        $v0, $a3, $s2
    ctx->pc = 0x2c8c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c8c98: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x2C8C98u;
    {
        const bool branch_taken_0x2c8c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C98u;
        // 0x2c8c9c: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c98) {
            ctx->pc = 0x2C8A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8a00;
        }
    }
    ctx->pc = 0x2C8CA0u;
    // 0x2c8ca0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2c8ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c8ca4:
    // 0x2c8ca4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2c8ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c8ca8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2c8ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c8cac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c8cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c8cb0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c8cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c8cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CB4u;
        // 0x2c8cb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8CBCu;
    // 0x2c8cbc: 0x0  nop
    ctx->pc = 0x2c8cbcu;
    // NOP
    ctx->pc = 0x2c8cc0u;
}
