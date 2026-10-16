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

// Function: sub_002B7A70
// Address: 0x2b7a70 - 0x2b7c48
void sub_002B7A70_0x2b7a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7A70_0x2b7a70");
#endif

    switch (ctx->pc) {
        case 0x2b7bbcu: goto label_2b7bbc;
        case 0x2b7c1cu: goto label_2b7c1c;
        default: break;
    }

    ctx->pc = 0x2b7a70u;

    // 0x2b7a70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b7a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b7a74: 0x30acffff  andi        $t4, $a1, 0xFFFF
    ctx->pc = 0x2b7a74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b7a78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b7a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b7a7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2b7a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b7a80: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2b7a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2b7a84: 0x30f3ffff  andi        $s3, $a3, 0xFFFF
    ctx->pc = 0x2b7a84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2b7a88: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2b7a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2b7a8c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b7a8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a90: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2b7a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2b7a94: 0x30d5ffff  andi        $s5, $a2, 0xFFFF
    ctx->pc = 0x2b7a94u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2b7a98: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2b7a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2b7a9c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2b7a9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7aa0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2b7aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2b7aa4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2b7aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2b7aa8: 0x16620022  bne         $s3, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B7AA8u;
    {
        const bool branch_taken_0x2b7aa8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AA8u;
        // 0x2b7aac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7aa8) {
            ctx->pc = 0x2B7B34u;
            goto label_2b7b34;
        }
    }
    ctx->pc = 0x2B7AB0u;
    // 0x2b7ab0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2b7ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7ab4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2b7ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b7ab8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2b7ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b7abc: 0x2a63018  mult        $a2, $s5, $a2
    ctx->pc = 0x2b7abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2b7ac0: 0x948b181a  lhu         $t3, 0x181A($a0)
    ctx->pc = 0x2b7ac0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6170)));
    // 0x2b7ac4: 0x248a0820  addiu       $t2, $a0, 0x820
    ctx->pc = 0x2b7ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 2080));
    // 0x2b7ac8: 0x2487181c  addiu       $a3, $a0, 0x181C
    ctx->pc = 0x2b7ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6172));
    // 0x2b7acc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2b7accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2b7ad0: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x2b7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2b7ad4: 0x2488081e  addiu       $t0, $a0, 0x81E
    ctx->pc = 0x2b7ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2078));
    // 0x2b7ad8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x2b7ad8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2b7adc: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x2b7adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2b7ae0: 0x95490000  lhu         $t1, 0x0($t2)
    ctx->pc = 0x2b7ae0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b7ae4: 0x3463fc00  ori         $v1, $v1, 0xFC00
    ctx->pc = 0x2b7ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64512);
    // 0x2b7ae8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2b7ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b7aec: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2b7aecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2b7af0: 0xa489181a  sh          $t1, 0x181A($a0)
    ctx->pc = 0x2b7af0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6170), (uint16_t)GPR_U32(ctx, 9));
    // 0x2b7af4: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x2b7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x2b7af8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2b7af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2b7afc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b7afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b7b00: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x2b7b00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b7b04: 0x153180  sll         $a2, $s5, 6
    ctx->pc = 0x2b7b04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x2b7b08: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x2b7b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x2b7b0c: 0x34c6003f  ori         $a2, $a2, 0x3F
    ctx->pc = 0x2b7b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)63);
    // 0x2b7b10: 0x3063fc00  andi        $v1, $v1, 0xFC00
    ctx->pc = 0x2b7b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64512);
    // 0x2b7b14: 0x1831825  or          $v1, $t4, $v1
    ctx->pc = 0x2b7b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x2b7b18: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x2b7b18u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7b1c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x2b7b1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b7b20: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2b7b20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x2b7b24: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2b7b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2b7b28: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x2b7b28u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7b2c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2B7B2Cu;
    {
        const bool branch_taken_0x2b7b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B2Cu;
        // 0x2b7b30: 0xa4860020  sh          $a2, 0x20($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b2c) {
            ctx->pc = 0x2B7C1Cu;
            goto label_2b7c1c;
        }
    }
    ctx->pc = 0x2B7B34u;
label_2b7b34:
    // 0x2b7b34: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b7b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7b38: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b7b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b7b3c: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x2b7b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2b7b40: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x2b7b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b7b44: 0x9609181a  lhu         $t1, 0x181A($s0)
    ctx->pc = 0x2b7b44u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6170)));
    // 0x2b7b48: 0x2605081e  addiu       $a1, $s0, 0x81E
    ctx->pc = 0x2b7b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2078));
    // 0x2b7b4c: 0x26080820  addiu       $t0, $s0, 0x820
    ctx->pc = 0x2b7b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x2b7b50: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b7b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2b7b54: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2b7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b7b58: 0x26061820  addiu       $a2, $s0, 0x1820
    ctx->pc = 0x2b7b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6176));
    // 0x2b7b5c: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x2b7b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b7b60: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2b7b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b7b64: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x2b7b64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b7b68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b7b6c: 0xc28821  addu        $s1, $a2, $v0
    ctx->pc = 0x2b7b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b7b70: 0xc3840  sll         $a3, $t4, 1
    ctx->pc = 0x2b7b70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x2b7b74: 0xa605181a  sh          $a1, 0x181A($s0)
    ctx->pc = 0x2b7b74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6170), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b7b78: 0x3262003f  andi        $v0, $s3, 0x3F
    ctx->pc = 0x2b7b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)63);
    // 0x2b7b7c: 0xa64c0000  sh          $t4, 0x0($s2)
    ctx->pc = 0x2b7b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x2b7b80: 0x153180  sll         $a2, $s5, 6
    ctx->pc = 0x2b7b80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x2b7b84: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2b7b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2b7b88: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2b7b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2b7b8c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2b7b8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7b90: 0xc2140  sll         $a0, $t4, 5
    ctx->pc = 0x2b7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x2b7b94: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2b7b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b7b98: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b7b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b9c: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x2b7b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b7ba0: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x2b7ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7ba4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2b7ba4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7ba8: 0x3042fc00  andi        $v0, $v0, 0xFC00
    ctx->pc = 0x2b7ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64512);
    // 0x2b7bac: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x2b7bacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2b7bb0: 0xa6290000  sh          $t1, 0x0($s1)
    ctx->pc = 0x2b7bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x2b7bb4: 0xc0ad91a  jal         func_2B6468
    ctx->pc = 0x2B7BB4u;
    SET_GPR_U32(ctx, 31, 0x2B7BBCu);
    ctx->pc = 0x2B7BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7BB4u;
    // 0x2b7bb8: 0xa4e60020  sh          $a2, 0x20($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B6468u, 0x2B7BB4u, 0x2B7BBCu)) {
        return;
    }
    ctx->pc = 0x2B7BBCu;
label_2b7bbc:
    // 0x2b7bbc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B7BBCu;
    {
        const bool branch_taken_0x2b7bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BBCu;
        // 0x2b7bc0: 0x24037c00  addiu       $v1, $zero, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7bbc) {
            ctx->pc = 0x2B7C1Cu;
            goto label_2b7c1c;
        }
    }
    ctx->pc = 0x2B7BC4u;
    // 0x2b7bc4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x2b7bc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b7bc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2b7bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2b7bcc: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x2b7bccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7bd0: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x2b7bd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7bd4: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x2b7bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x2b7bd8: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7BD8u;
    {
        const bool branch_taken_0x2b7bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BD8u;
        // 0x2b7bdc: 0x24820400  addiu       $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7bd8) {
            ctx->pc = 0x2B7BE4u;
            goto label_2b7be4;
        }
    }
    ctx->pc = 0x2B7BE0u;
    // 0x2b7be0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x2b7be0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_2b7be4:
    // 0x2b7be4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2b7be4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7be8: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x2b7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x2b7bec: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2b7becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2b7bf0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7bf4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7BF4u;
    {
        const bool branch_taken_0x2b7bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7bf4) {
            ctx->pc = 0x2B7BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7BF4u;
            // 0x2b7bf8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7C20u;
            goto label_2b7c20;
        }
    }
    ctx->pc = 0x2B7BFCu;
    // 0x2b7bfc: 0x9603400e  lhu         $v1, 0x400E($s0)
    ctx->pc = 0x2b7bfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16398)));
    // 0x2b7c00: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x2b7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b7c04: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7C04u;
    {
        const bool branch_taken_0x2b7c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C04u;
        // 0x2b7c08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c04) {
            ctx->pc = 0x2B7C1Cu;
            goto label_2b7c1c;
        }
    }
    ctx->pc = 0x2B7C0Cu;
    // 0x2b7c0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b7c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b7c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c14: 0xc0ade08  jal         func_2B7820
    ctx->pc = 0x2B7C14u;
    SET_GPR_U32(ctx, 31, 0x2B7C1Cu);
    ctx->pc = 0x2B7C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C14u;
    // 0x2b7c18: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7820u, 0x2B7C14u, 0x2B7C1Cu)) {
        return;
    }
    ctx->pc = 0x2B7C1Cu;
label_2b7c1c:
    // 0x2b7c1c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2b7c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b7c20:
    // 0x2b7c20: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2b7c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b7c24: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2b7c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7c28: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b7c28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7c2c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2b7c2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7c30: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2b7c30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7c34: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2b7c34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C3Cu;
        // 0x2b7c40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7C44u;
    // 0x2b7c44: 0x0  nop
    ctx->pc = 0x2b7c44u;
    // NOP
    ctx->pc = 0x2b7c48u;
}
